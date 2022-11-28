<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>In The Beninging</title>
    <style>
    * {
        margin: 0;
        padding: 0;
    }

    .container {
        display: grid;
        grid-template-columns: auto auto;
        justify-content: space-evenly;
        gap: 10px;
        /* border: 1px dashed purple; */
    }
    </style>
</head>

<body>
    <h1 style="text-align:center">Jeevan Sathi</h1>
    <hr>
    <div class="container">
        <img src="data:image/jpeg;base64,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"
            )></img>
        <img src="data:image/jpeg;base64,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"
            )></img>
        <div><?php Wife1(); ?></div>
        <div><?php Wife2(); ?></div>
    </div>
    <hr>
    <center>
        <?php
        $a = 10;
        $b = $a + $a;
        echo "<p>$b</p>";
        echo "<hr>";
        // ! Loops
        while ($a == 10) {
            echo "<p>$a</p>";
            $a++;
        }
        do {
            echo "<p>$a</p>";
        } while ($a != 11);
        for ($i = 1; $i <= 2; $i += 1) {
            echo $i;
        }
        echo "<hr>";
        // * Functons
        function Wife1()
        {

            $name = "Sonam Bajwa";
            $dob = "10/10/1996";
            $skin = "Gori";
            $height = "Very Lambi";
            echo "<br><b>GF 1</b><br>Name: " . $name . "<br>Dob: " . $dob . "<br>Skin: " . $skin . "<br>Height: " . $height;
        }
        function Wife2()
        {
            $name = "Kiara Advani";
            $dob = "14/1/1995";
            $skin = "Gori";
            $height = "Avg Lambi";
            echo "<br><b>GF 2</b><br>Name: " . $name . "<br>Dob: " . $dob . "<br>Skin: " . $skin . "<br>Height: " . $height;
        }
        // ? Array
        $arr = array(1, "Jassa", "Mussu");
        echo "<br>" . $arr[1];
        $count = count($arr);
        echo "<br>" . $count;
        echo "<br>";
        for ($i = 0; $i < $count; $i++) {
            echo $arr[$i] . " ";
        }
        echo "<br>";
        var_dump($arr);
        echo "<hr>";
        // ! Classes
        class Shop
        {
            public $shopname = "Jasse Di Hatti";
            public $loc = "Phillaur";
            function display()
            {
                echo "<b>Shop Name: </b>" . $this->shopname . "<br><b>Location: </b>" . $this->loc;
            }
        }
        class Clothes extends Shop
        {
            public $upperwears = array("Tshirts", "Shirts", "Jackets", "Sweaters", "Pullovers");
            public $lowerwears = array("Pants", "Trousers", "Pajamas", "Cargos", "Jeans");
            function display_clothes()
            {
                echo "<br><b>Upper Wears Available: </b>";
                for ($i = 0; $i < count($this->upperwears); $i++) {
                    echo $this->upperwears[$i] . " ";
                }
                echo "<br>";
                echo "<b>Lower Wears Available: </b>";
                for ($i = 0; $i < count($this->upperwears); $i++) {
                    echo $this->lowerwears[$i] . " ";
                }
            }
        }
        class Shoes extends Shop
        {
            public $shoebrands = array("Nike", "Puma", "Woodland", "Adidas", "Reebok");
            function display_shoes()
            {
                echo "<br><b>Shoe Brand Available: </b>";
                for ($i = 0; $i < count($this->shoebrands); $i++) {
                    echo $this->shoebrands[$i] . " ";
                }
            }
        }
        class Sandals extends Shoes
        {
            public $sandalbrands = array("Bata", "RedWood", "Liberty", "Metro", "Asian");
            function display_sandals()
            {
                echo "<br><b>Sandal Brand Available: </b>";
                for ($i = 0; $i < count($this->sandalbrands); $i++) {
                    echo $this->sandalbrands[$i] . " ";
                }
            }
        }
        $clothes = new Clothes();
        $clothes->display();
        $clothes->display_clothes();
        $shoes = new Sandals();
        $shoes->display_shoes();
        $shoes->display_sandals();
        echo "<hr>";
        ?>
    </center>
</body>

</html>