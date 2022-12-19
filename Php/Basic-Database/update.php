<?php

    include "../conn.php";

    if(isset($_POST['update'])){
        $first_name= $_POST['firstname'];
        $user_id= $_GET['id'];
        $last_name= $_POST['lastname'];
        $email= $_POST['email'];
        $password = $_POST['password'];
        $gender = $_POST['gender'];
        
        $sql = "UPDATE `basic` SET `firstname` = '$first_name', `lastname` = '$last_name', `email` = '$email', `password` = '$password', `gender` = '$gender' WHERE `basic`.`id` = '$user_id'";
        
        $result = $conn->query($sql);
        
        if($result == TRUE) {
            echo "Record Updated Succesfully";
        }
        else {
            echo "Error:" . $sql . "<br>" . $conn->error;
        }
    }
    if(isset($_GET['id'])) {
        $user_id = $_GET['id'];

        $sql = "SELECT * FROM basic WHERE id=$user_id";
        
        $result = $conn->query($sql);

        if($result->num_rows > 0){
            while($row = $result->fetch_assoc()){
                $id = $row['id'];
                $first_name = $row['firstname'];
                $lastname = $row['lastname'];
                $email = $row['email'];
                $password = $row['password'];
                $gender = $row['gender'];
            }

?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Update</title>
</head>

<body>
    <h2>User Update Row</h2>
    <form action="" method="POST">
        <fieldset>
            <legend>Personal information:</legend>
            First name: <br>
            <input type="text" name="firstname" value="<?php echo $first_name; ?>">
            <input type="hidden" name="user_id" value="<?php echo $id; ?>">
            <br>
            Last name:<br>
            <input type="text" name="lastname" value="<?php echo $lastname; ?>">
            <br>
            Email:<br>
            <input type="email" name="email" value="<?php echo $email; ?>">
            <br>
            Password: <br>
            <input type="password" name="password" value="<?php echo $password; ?>">
            <br>
            Gender:<br>
            <input type="radio" name="gender" value="Male" <?php if($gender == 'Male'){ echo "checked";} ?>>Male
            <input type="radio" name="gender" value="Female" <?php if($gender == 'Female'){ echo "checked";} ?>>Female
            <br><br>
            <input type="submit" value="Update" name="update">
        </fieldset>
    </form>
</body>

</html>

<?php 
}else {
header('Location: view.php');
}
}
?>