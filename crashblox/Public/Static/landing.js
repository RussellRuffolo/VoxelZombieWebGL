const queryString = window.location.search;
console.log(queryString);

const urlParams = new URLSearchParams(queryString);

const state = urlParams.get('state')


const code = urlParams.get('code')
console.log(state);
console.log(code)


var callbackUrl = new URL('https://id.crashblox.net/auth/google/callback');

var callbackParamData = {
  code : code,
  state : state
};
for(var k in callbackParamData){
  callbackUrl.searchParams.append(k, callbackParamData[k]);
}

fetch(callbackUrl)
  .then(response => response.json())
  .then(data => { console.log(data);


window.localStorage.token = data.access_token;

var userUrl = new URL('https://id.crashblox.net/users/me');

console.log(data.access_token);

fetch(userUrl,
{
headers: { "Authorization": `Bearer ${data.access_token}` }
})
.then(response => response.json())
.then(data => {

 console.log(data);

if(!data.username){
document.getElementById("name").innerHTML = '<input type = text id = "username"><button id = "submit">submit</button>';

document.getElementById("submit").onclick = function() {

console.log(window.localStorage.token);
console.log(document.getElementById("username").value);

let userBody = {
"username": document.getElementById("username").value
};

console.log(JSON.stringify(userBody));

fetch(userUrl, {
method: 'PATCH',
body: JSON.stringify(userBody),
headers: {"Authorization": 'Bearer ' + window.localStorage.token,
"Content-Type": "application/json",
"accept": "application/json"}
}).then(response => response.json())
.then(data => {console.log(data)});

}
}
else{
document.getElementById("play").innerHTML = '<a = href="game.html">Play Game</a>';
}

});
});












  
