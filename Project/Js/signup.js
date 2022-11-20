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


// queries

// if (seconds > 0) {
  //   document.querySelector('#otp-btn').textContent = "";
  //   document.querySelector('#message').textContent = 
  //     "Otp has been sent to your mobile or email";
//   setTimeout(tick, 1000);
// }
// else {
//   document.querySelector('#message').textContent = 
//     "";
//   document.getElementById("timer").innerHTML = "";
//   document.querySelector('#otp-btn').textContent = "Resend Otp";
// }