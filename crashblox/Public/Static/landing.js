const queryString = window.location.search;
console.log(queryString);

const urlParams = new URLSearchParams(queryString);

const state = urlParams.get('state')

const code = urlParams.get('code')
console.log(state);
console.log(code)

// let xhr = new XMLHttpRequest();
// xhr.open("POST", "https://id.crashblox.net/auth/register");

// xhr.setRequestHeader("Accept", "application/json");
// xhr.setRequestHeader("Content-Type", "application/json");

// xhr.onload = () => console.log(xhr.responseText);

// let data = JSON.stringify({
//   "email": "test",
//   "username": "testName"
// });

// xhr.send(data);

var callbackUrl = new URL('https://id.crashblox.net/auth/google/callback');
var data = {
  code : code,
  state : state
};
for(var k in data){
  callbackUrl.searchParams.append(k, data[k]);
}

fetch(callbackUrl)
  .then(response => response.json())
  .then(data => console.log(data));
  var returnUrl = new URL(data);

  returnUrl.searchParams.get('token');
