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
