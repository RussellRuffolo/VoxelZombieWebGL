const google_sign_in_button = document.querySelector("#google")
google_sign_in_button.addEventListener("click", function () {
    fetch("https://id.crashblox.net/auth/google/authorize")
        .then(response => {console.log(response);
            return response.json()})
        .then(data => data.authorization_url)
        // Todo: figure out target
        .then(oAuthUrl => window.open(oAuthUrl,null, 'width='+screen.width+',height='+screen.height+',modal=yes,alwaysRaised=yes'));
})


const discord_sign_in_button = document.querySelector("#discord")
discord_sign_in_button.addEventListener("click", function () {
    fetch("https://id.crashblox.net/auth/discord/authorize")
        .then(response => {console.log(response);
            return response.json()})
        .then(data => data.authorization_url)
        // Todo: figure out target
        .then(oAuthUrl => window.open(oAuthUrl,null, 'width='+screen.width+',height='+screen.height+',modal=yes,alwaysRaised=yes'));
})
// When the user scrolls the page, execute myFunction
window.onscroll = function() {floatingHeader()};

// Get the header
var header = document.getElementById("crashbloxHeader");

// Get the offset position of the navbar
var sticky = header.offsetTop;

// Add the sticky class to the header when you reach its scroll position. Remove "sticky" when you leave the scroll position
function floatingHeader() {
  if (window.pageYOffset > sticky) {
    header.classList.add("sticky");
  } else {
    header.classList.remove("sticky");
  }
}