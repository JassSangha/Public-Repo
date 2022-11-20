<?php

$showAlert = false;
$showError = false;
$exists=false;

if($_SERVER["REQUEST_METHOD"] == "POST") {

    include 'conn.php';

    $username = $_POST["username"];
    $password = $_POST["password"];
    $cpassword = $_POST["cpassword"];


    $sql = "Select * from users where username='$username'";

    $result = mysqli_query($conn, $sql);

    $num = mysqli_num_rows($result);

    // This sql query is use to check if
    // the username is already present
    // or not in our Database
    if($num == 0) {
        if(($password == $cpassword) && $exists==false) {

            $hash = password_hash($password,PASSWORD_DEFAULT);

            // Password Hashing is used here.
            $sql = "INSERT INTO `users` ( `username`,`password`, `date`) VALUES ('$username','$hash', current_timestamp())";

            $result = mysqli_query($conn, $sql);

            if ($result) {
                $showAlert = true;
            }
        }
        else {
            $showError = "Passwords do not match";
        }
    }// end if

    if($num>0)
    {
        $exists="Username not available";
    }

}//end if

?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Binance</title>
    <link rel="stylesheet" href="../../Css/Login/signup.css">
</head>

<body>
    <div class="main">
        <div class="header text-center">
            <a href="signin.html"><img src="../../Images/small_logo.png"></a>
            <div class="tagline">Welcome to Binance</div>
        </div>

        <form class="login-form" name="login_form">
            <div>
                <label for="username" class="form-label">Email or Phone</label>
                <input type="text" id="username" name="username" class="form-input" placeholder="Email or Phone">

                <label for="userpassword" class="form-label">Password</label>
                <div class="password-div">
                    <input type="password" class="form-input" name="userpassword" id="userpassword"
                        placeholder="New Password">
                    <button type="button" id="eye" onclick="togglepassword()">&nbsp<img class="img"
                            src="../../Images/small_logo.png" alt=""></button>
                </div>

                <label for="userotp" class="form-label">Otp</label>
                <div class="otp-div">
                    <input class="form-input" type="number" id="userotp" name="userotp" placeholder="Enter the Otp">
                    <button type="button" name="otpbtn" id="otp-btn" class="text-center text-white">Send Otp</button>
                </div>
            </div>
            <span class="footer-item counter" id="second"></span>

        </form>

        <form class="login-form2">
            <button class="btn text-center text-white">Next
            </button>
        </form>
        <span id="message">ej</span>


    </div>
    <script src="../../Js/signup.js"></script>
</body>

</html>