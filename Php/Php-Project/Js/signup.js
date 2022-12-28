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

// 1 Min Countdown
let second = 5;
let millisecond = 0;
let cron;

document.login_form.otpbtn.onclick = () => start();
  
function start() {
  cron = setInterval(() => { timer(); }, 10);
}
function timer() {
  if ((millisecond += 10) == 1000) {
    millisecond = 0;
    second--;
  }
  if (second >=0 ){
    document.getElementById('second').innerText = returnData(second);
    document.querySelector('#otp-btn').textContent = "";
    document.querySelector('#otp-btn').disabled = true;
    document.querySelector('#message').textContent = 
      "Otp has been sent to your mobile or email";
  }
  if (second == 0) {
    document.querySelector('#otp-btn').disabled = false;
    document.querySelector('#message').textContent = "";
    clearInterval(cron);
    second = 5;
    document.querySelector('#second').textContent = "";
    document.querySelector('#otp-btn').textContent = "Resend Otp";
    document.getElementById("timer").innerHTML = "";
  }
  function returnData(input) {
    return input > 10 ? input : `0${input}`
  }
}


// Client Side Form Validation
function validateEmail(email) {
  const re = /^(([^<>()[\]\\.,;:\s@"]+(\.[^<>()[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
  return re.test(String(email).toLowerCase());
}

function validateOnlyNumbers(phone) {
  return phone.match(/^\d+$/);
}

const input = document.getElementById("username")
const error = document.querySelector("span");

input.addEventListener("keyup", e => {
  const value = e.target.value;

  if (validateOnlyNumbers(value)) {
    if (value.length === 10) {
      error.textContent = "Phone Number"
      // Format input acc to phone no
    } else {
      // error.textContent = "could be Phone Number"
    }
  } else {
    if (validateEmail(value)) {
      error.textContent = "Email"
      // Format input acc to Email
    } else {
      // error.textContent = "could be Email"
    }
  }
})
