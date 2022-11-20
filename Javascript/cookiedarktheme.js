let localvar = localStorage.getItem("localvar");
const localvarToggle = document.querySelector("#dark-theme-btn");
console.log(localvar)
const enableDarkMode = () => {
    document.body.classList.add("dark-theme");
    localStorage.setItem("localvar", "enabled");
};

const disableDarkMode = () =>{
    document.body.classList.remove("dark-theme");
    localStorage.setItem("localvar", null);
};

if (localvar === "enabled"){
    enableDarkMode();
};
localvarToggle.addEventListener("click", () =>{
    localvar = localStorage.getItem("localvar");
    if(localvar !== "enabled"){
        enableDarkMode();
        console.log(localvar);
    }
    else{
        disableDarkMode();
    }
});