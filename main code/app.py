import os
import numexpr
import logging
import warnings
import torch
from deoldify import device
from deoldify.device_id import DeviceId
from deoldify.visualize import *
from flask import Flask, render_template, request, redirect, url_for, send_from_directory
from pathlib import Path

# Patch torch.load to use weights_only=False
original_torch_load = torch.load
def safe_torch_load(*args, **kwargs):
    kwargs['weights_only'] = False
    return original_torch_load(*args, **kwargs)
torch.load = safe_torch_load

# Configure NumExpr
numexpr.set_num_threads(8)  # Set the number of threads (e.g., 8)
logging.getLogger("numexpr").setLevel(logging.WARNING)  # Suppress numexpr messages

# Suppress warnings
warnings.filterwarnings("ignore", category=UserWarning, module="fastai")
warnings.filterwarnings("ignore", category=UserWarning, module="torchvision")
warnings.filterwarnings("ignore", category=FutureWarning, module="torch.nn.utils.weight_norm")

# Initialize Flask app
app = Flask(__name__)

# Set up directories
os.makedirs("dummy", exist_ok=True)
os.makedirs("result_images", exist_ok=True)
os.makedirs("static/uploads", exist_ok=True)

# Path to the locally downloaded model
model_path = "models/ColorizeArtistic_gen.pth"

# Ensure the model exists
if not os.path.exists(model_path):
    raise FileNotFoundError(f"Model not found at {model_path}. Please ensure the model is downloaded and placed in the 'models' directory.")

# Set up the device (GPU or CPU)
device.set(device=DeviceId.GPU0)  # Use DeviceId.CPU if you don't have a GPU

# Load the model
colorizer = get_image_colorizer(artistic=True)

# Home route
@app.route("/", methods=["GET", "POST"])
def home():
    if request.method == "POST":
        # Check if a file was uploaded
        if "file" not in request.files:
            return redirect(request.url)
        file = request.files["file"]
        if file.filename == "":
            return redirect(request.url)
        
        # Save the uploaded file
        input_path = os.path.join("static", "uploads", file.filename)
        file.save(input_path)

        # Colorize the image
        results_dir = Path("result_images")
        output_image_path = colorizer.plot_transformed_image(
            path=input_path,
            render_factor=35,  # Adjust this for better results
            compare=True,
            results_dir=results_dir,
        )

        # Return the result page
        return render_template("index.html", input_image=file.filename, output_image=output_image_path.name)

    return render_template("index.html")

# Route to display the colorized image
@app.route("/result/<filename>")
def result(filename):
    return send_from_directory("result_images", filename)

# Run the app
if __name__ == "__main__":
    app.run(debug=True)