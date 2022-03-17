const axios = require("axios")
const express = require('express');
const helmet = require('helmet')
const path = require('path');

const app = express();

const hostname = '0.0.0.0';
const port = 80
const baseUrl = "192.168.0.171:25565"


app.use(helmet({
    crossOriginResourcePolicy: {policy: "same-site"},
    contentSecurityPolicy:  {directives: {
        "script-src": ["'self'", "'unsafe-inline'", "blob:"],
        // Todo: ensure security with people who know more about the web
        "default-src": ["'self'", "blob:", "*\." + process.env.DOMAIN]
    }}
}))
app.use(express.static(path.join(__dirname, 'Public')));


// PROXY
// Todo: this feels like it should be part of helmet, but I couldn't figure out where to set it
app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})
app.get('/get-offer', (req, res) => {
 try{
   axios.get(baseUrl + '/get-offer')
     .then(response => {
       var responseData = response.data;
       res.send(responseData);
  })
  .catch(error => {
    console.log(error);
  });
 }
 catch(e){
  console.log(e.message)
 }
});
app.post('/send-answer-get-candidate', (req,res) =>{
  console.log('Got request: ', req.body);
  axios.post(baseUrl + 'send-answer-get-candidate', req.body)
    .then(function (response){
      console.log("Response data: ", response.data);
      res.send(response.data);
    })
    .catch(function (error){
      console.log(error);
    })
});

app.get('/test', (req, res) =>{
  console.log("Got request for test: ", req.body)
  axios.get("http://google.com")
    .then(response => {
      console.log("Response data: ", response.data)
      res.send(response.data)
    })
    .catch(error => console.log(error))
})

app.listen(port, hostname, () => console.log('WebGL Server is listening on ' + hostname + ':' + port));
