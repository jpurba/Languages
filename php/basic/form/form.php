<?php
    // Enable error checking for all errors.
    ini_set('display_errors',1);
    error_reporting(E_ALL);

    // test data returned - displays the content of the variables
    // print_r($_POST);

    // store data in variables based on the form data on form.html.
    // the code will display all of these variables in HTML code below 
    $name  = $_POST['name'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    $heard = $_POST['heard'];
    $comments = $_POST['comments'];
?>


<!DOCTYPE html>
<!-- Jeremiah Purba -->
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Form Results</title>
</head>
<body>
   <header>
      <!-- These are required in the form so there will be a value -->
       <h1>Thank You for Signing Up!</h1>
   </header>
   
   <main>
       <h2>You have entered the following information:</h2>        

       <!-- Display received form PHP variables in HTML format -->
       <!-- All of these variables are required in the form.html -->
       <!-- Display PHP variable using PHP code inside HTML code -->
       <p>Name: <?php echo $name ?></p>

       <p>Email: <?php echo $email ?></p>

       <p>Phone: <?php echo $phone ?></p>

       <p>How you heard about us: <?php echo $heard ?> </p>

       <p>Comments: <?php echo $comments ?></p>
  
   </main>    
</body>
</html>