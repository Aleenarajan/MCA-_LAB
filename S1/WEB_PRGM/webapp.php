 <?php
$servername = "localhost";
$username = "root";
$password = "";
$db="db_ale";


$conn = new mysqli($servername, $username, $password,$db);

if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";
if($_POST)
{
$name=$_POST["username"];
$Email=$_POST["email"];
$department=$_POST["dept"];
$sql = "INSERT INTO student (username,email,dept)
VALUES ('$name', '$Email', '$department')";

if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . $conn->error;
}
}
?> 
<html>
 <head>
  <title>REGISTRATION FORM</title>
    <body>
        <form  method="post">
                <label for="username">Username:</label>
                <input type="text" id="username" name="username"><br>
                <label for="email">Email:</label>
                <input type="email" id="email" name="email"><br>
                <label for="department">Department:</label>
                <select name="dept" id="dept">
		    <option value="select">--select-</option>
		    <option value="MCA">MCA</option>
		    <option value="Mcom">Mcom</option>
		    <option value="MSc">MSc</option>
		    <option value="MA">MA</option>
		</select><br>
                <input type="submit" value="Register">
        </form>
 <table>
  <tr>
    <th>username</th>
    <th>email</th>
    <th>department</th>
  </tr>
<?php
$sql="SELECT * FROM student";
$result=$conn->query($sql);
while($rowS=$result->fetch_assoc()) 
{
?>
  <tr>
    <td> <?php echo  $row["name"]?></td>
    <td><?php echo $row["email"]?></td>
    <td><?php echo $row["dept"]?></td>
  </tr>
<?php 
}
?>  
</table> 
    </body>
</html>

