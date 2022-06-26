fetch('https://id.crashblox.net/users/me')
  .then(response => response.json())
  .then(data => console.log(data));
