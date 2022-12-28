<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Email/Mobile server side validation</title>
    <style>
    .error {
        font-weight: lighter;
        letter-spacing: .5em;
        font-style: italic;
        font-family: 'Franklin Gothic Medium';
        padding-left: 20px;
        font-size: 8px;
        color: green;
    }

    .input {
        font-weight: lighter;
        letter-spacing: .5em;
        font-style: italic;
        font-family: 'Franklin Gothic Medium';
        padding-left: 20px;
        color: darkred;
        font-size: 8px;
    }

    #username {
        outline: none
    }

    .errorinput {
        border: 1px solid black;
        outline: none;
        background-color: red;
    }
    </style>
</head>

<body>
    <input id="username" type="text" />
    <button type="submit">Submit</button>
    <br>
    <span class="input" id="message"></span>
    <script type="text/javascript">
    function validateEmail(email) {
        const re =
            /^(([^<>()[\]\\.,;:\s@" ]+(\.[^<>()[\]\\.,;: \s @ "]+)*)|(". +"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
        return re.test(String(email).toLowerCase());
    }

    function validateOnlyNumbers(phone) {
        return phone.match(/^\d+$/);
    }

    const input = document.getElementById("username");
    const h1 = document.getElementById("message");
    var v = document.getElementById("message");
    input.addEventListener("keyup", e => {
        const value = e.target.value;

        if (validateOnlyNumbers(value)) {
            if (value.length === 10 || value.length === 13) {
                // h1.textContent = "Valid"
                input.classList.remove('errorinput')
            } else if (value.length >= 3) {
                // h1.textContent = "Not Valid"
                input.classList.add('errorinput')
            }
        } else {
            if (validateEmail(value)) {
                input.classList.remove('errorinput')
            } else if (value.length >= 3) {
                input.classList.add('errorinput')
            }
        }
    })
    </script>
</body>

</html>