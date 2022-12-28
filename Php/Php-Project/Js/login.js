// Auto Detect System Theme
let mediaQueryObj = window.matchMedia('(prefers-color-scheme: dark)');
let isDarkMode = mediaQueryObj.matches; 
if(isDarkMode==true){
  document.body.classList.add("dark-theme")
}
else{
  document.body.classList.remove("dark-theme")
}

// Password Toggle
function togglepassword() {
  var x = document.getElementById("userpassword");
  if (x.type === "password") {
    x.type = "text";
  } else {
    x.type = "password";
  }
} 
// Server Side Form Validation
function validateEmail(email) {
  const re =/^(([^<>()[\]\\.,;:\s@" ]+(\.[^<>()[\]\\.,;: \s @ "]+)*)|(". +"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
  return re.test(String(email).toLowerCase());
}

function validateOnlyNumbers(phone) {
  return phone.match(/^\d+$/);
}

const input = document.getElementById("username");

input.addEventListener("keyup", e => {
  const value = e.target.value;

  if (validateOnlyNumbers(value)) {
      if (value.length === 10 || value.length === 13) {
          input.classList.remove('form-input-error')
      } else if (value.length >= 3) {
          // input.classList.remove('form-input')
          input.classList.add('form-input-error')
      }
  } else {
      if (validateEmail(value)) {
          input.classList.remove('form-input-error')
      } else if (value.length >= 3) {
          input.classList.add('form-input-error')
      }
  }
})
