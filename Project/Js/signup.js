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






// queries

// if (seconds > 0) {
//   setTimeout(tick, 1000);
//   document.querySelector('#otp-btn').textContent = "";
//   document.querySelector('#message').textContent = 
//     "Otp has been sent to your mobile or email";
// }
// else {
//   document.querySelector('#message').textContent = 
//     "";
//   document.getElementById("timer").innerHTML = "";
//   document.querySelector('#otp-btn').textContent = "Resend Otp";
// }