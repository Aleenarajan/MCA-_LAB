filename=raw_input("Enter a filename:")
if "." in filename:
    name,extension=filename.split(".")
    print("The extension of the file is:"+ extension)
else:
    print("invalid filename format.Please include the file extension(eg.,filename.txt)")
