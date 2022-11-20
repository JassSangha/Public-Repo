<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table>
        <tr>
            <td> <b> Select your Profile Pic </b> </td>  
            <td> <input type="file" name="pic"/> </td>  
        </tr>  
        <tr>  
            <td> <b> Select your Date of Birth </b> </td>  
            <td>  
        <select name="mm">  
            <option value=""> Month </option>  
            <?php   
            for($i=1;$i<=12;$i++)  
            {  
            echo "<option value ='$i'>".$i."</option>";  
            }  
            ?>  
        </select>  
        <select name="dd">  
            <option value=""> Date </option>  
            <?php   
            for($i=1;$i<=31;$i++)  
            {  
            echo "<option value ='$i'>".$i."</option>";  
            }  
            ?>  
        </select>  
        <select name="yy">  
            <option value=""> Year </option>  
            <?php   
            for($i=1900;$i<=2015;$i++)  
            {  
            echo "<option value ='$i'>".$i."</option>";  
            }
            $dob=$yy."-".$mm."--".$dd;      
            echo $dob;
            ?>
        </table>
</body>
</html>