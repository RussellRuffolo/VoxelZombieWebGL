const google_sign_in_button = document.querySelector("#google")
google_sign_in_button.addEventListener("click", function () {
    console.log("Hello")
    fetch("https://id.snappervibes.com/auth/google/authorize")
        .then(response => {console.log(response);
            return response.json()})
        .then(data => data.authorization_url)
        // Todo: figure out target
        .then(oAuthUrl => window.open(oAuthUrl,null, 'width=972,height=660,modal=yes,alwaysRaised=yes'));
})
