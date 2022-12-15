<!DOCTYPE html>
<?php
   include("conn.php");
   session_start();
   
   if($_SERVER["REQUEST_METHOD"] == "POST") {
      
      $myusername = mysqli_real_escape_string($db,$_POST['username']);
      $mypassword = mysqli_real_escape_string($db,$_POST['userpassword']); 
      
      $sql = "SELECT * FROM users WHERE username = '$myusername' and  userpassword = '$mypassword'";
      $result = mysqli_query($db,$sql);
      $row = mysqli_fetch_array($result,MYSQLI_ASSOC);
    //   $active = $row[0]['id'];
    if (!$result) {
        printf("Error: %s\n", mysqli_error($db));
        exit();
    }
    $count = mysqli_num_rows($result);
		
      if($count == 1) {
        if ($myusername == $username and $mypassword=='password'){
            header("location: home.php");
        }
        else {
         $error = "Your Login Name or Password is invalid";
      }
   }
}
?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Page</title>
    <link rel="stylesheet" href="Css/Login/signin.css">
</head>
<body>
    <div class="main">
        <div class="header text-center">
            <a href="signin.php"><img src="Images/small_logo.png"></a>
            <div class="tagline">Sign in to Binance</div>
        </div>
    
        <form action="" method="post" class="login-form grid">
            <div>
                <label for="username" class="form-label">Email or Phone</label>    
                <input type="text" id="username" name="username" class="form-input" placeholder="Email or Phone" required>
    
                <label for="userpassword" class="password-div_item1 form-label">Password</label>    
                <input type="password" class="form-input" name="userpassword" id="userpassword" placeholder="Password" required>
                <button type="button" id="eye" onclick="togglepassword()">&nbsp<img class ="password-hider-img" src="Images/small_logo.png" alt=""></button>
                <div class="links">
                    <div>
                    <input type="checkbox" name="remember_me" id="remember_me"> <label id="remember_me" for="remember_me">Remember me</label>
                    </div>
                    <a class="password-div_item2 forgot-password_link link" href="signup.html">Forgot Password?</a>
                </div>
                <button type="submit" class="btn text-center text-white">Sign in</button>  
            </div>
        </div>
            
        </form>
        <form class="login-form2 grid">
            <div class="text-center">
                <div class="create-account_question mb-6">Don't have an account?</div>
                <div class="create-account_link">
                    <a href="#" class="green-text">Create account</a>
                </div>
            </div>
            </div>
        </form>
        <div class="footer-wrapper text-center">
            <a href="#" class="footer-item border-r">Terms of Service</a>
            <a href="#" class="footer-item">Privacy Policy</a><br>
            <span class="footer-item">Copyright @2020 Jass-Sangha. All rights reserved.</span>
        </div>
    </div>
    <!-- <div><?php echo $error; ?></div> -->
    <script src="../../Js/sigin.js"></script>
</body>

</html>