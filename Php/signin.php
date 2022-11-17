<?php 
    $username = $_POST['username'];
    $userpassword = $_POST['userpassword'];

   $con = new mysqli("localhost","root","","test");
   if($con->connect_error){
    die("Failed to connect: ".$con->connect_error);
   }
   else{
    $stmt = $con->prepare("Select * from newuser where email = ?");
    $stmt->bind_param("s",$email);
    $stmt->execute();
    $stmt_result = $stmt->get_result();
    if($stmt_result->num_rows > 0){
        $data = $stmt_result->fetch_assoc();
        if($data['password'] === $password){
            echo "<h3>Login Successfully</h3>";
        }
        else{
            echo "<h3>Invalid<h3>";
        }
    }
    else{
        echo "<h3>Invalid<h3>";
    }
   }   
?>