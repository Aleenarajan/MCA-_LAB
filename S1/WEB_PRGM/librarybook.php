 <?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "db_ale";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "connected succesfully";

if($_POST){
   $assertion_no=$_POST["assertion_no"];
   $title=$_POST["title"];
   $author=$_POST["author"];
   $edition=$_POST["edition"];
   $publisher=$_POST["publisher"];
$sql = "INSERT INTO libbook(assertion_no, title,author,edition,publisher)VALUES('$assertion_no','$title','$author','$edition','$publisher')";

if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . $conn->error;
}
  echo"<h1>Library</h1>";
  echo"<p>Assertion_no:$assertion_no</p>";
  echo"<p>Title:$title</p>";
  echo"<p>Author:$author</p>";
  echo"<p>Edition:$edition</p>";
  echo"<p>Publisher:$publisher</p>";
}
?>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Library</title>
</head>
<body>

<table border=2 align=center>

<tr><td>

<table cellspacing=10>

<tr><td colspan=3><h1>Book Information</h1></td></tr>
<form action="librarybook.php" method="post">

<label for="assertion_no">Assertion_no:</label>
        <input type="number" id="assertion_no" name="assertion_no" required><br>

        <label for="\title">Title:</label>
        <input type="text" id="title" name="title" required><br>

	<label for="author">Author:</label>
        <input type="text" id="author" name="author" required><br>

        <label for="edition">edition:</label>
        <input type="text" id="edition" name="edition" required><br>

        <label for="publisher">Publisher:</label>
        <input type="text" id="publisher" name="publisher" required><br>

        <input type="submit" value="Book Now">
</table>

</td></tr>

</table>

</body>

</html>
