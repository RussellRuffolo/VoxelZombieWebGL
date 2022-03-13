const google_sign_in_button = document.querySelector("#google")
google_sign_in_button.addEventListener("click", function () {
    console.log("Hello")
    fetch("http://id.localhost/")
        .then(response => response.json())
        .then(data => console.log(data));
})
