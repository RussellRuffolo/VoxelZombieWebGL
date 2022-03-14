const google_sign_in_button = document.querySelector("#google")
google_sign_in_button.addEventListener("click", function () {
    console.log("Hello")
    fetch("http://id.localhost/auth/google/authorize")
        .then(response => response.json())
        .then(data => data.authorization_url)
        // Todo: figure out target
        .then(oAuthUrl => window.open(oAuthUrl,null, 'width=972,height=660,modal=yes,alwaysRaised=yes'));
})
