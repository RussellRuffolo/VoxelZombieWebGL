const https = require('https');
const axios = require('axios');
const express = require('express');
const app = express();
const cors = require('cors');

const baseUrl = "host.docker.internal:25565"
const port = 8010

app.use(cors());

app.use(express.json());

app.use(function (req, res, next) {
  res.header("Access-Control-Allow-Origin", "*")
  next()
})

app.get("/", (req, res) => {
  res.send({"msg": "hello, world"})
});

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

// The VoxelZombieServer currently doesn't build correctly in Docker
// As such, it runs on a Window's computer on localhost
// This endpoint is for testing that proxyServer connects to localhost (outside of Docker)
// even on machines that don't have the server.
// Run `node testServer.js` before testing on your local machine to open the test server
app.get("/linux-test", (req, res) =>{
  axios.get("host.docker.internal")
    .then(response => {
      res.send(response.data)
    })
    .catch(err => {
      res.status(500)
      res.send("Something went wrong :(\n")
      console.log(err)
    })
})

options = {}
https.createServer(options, app).listen(port, () => console.log('Proxy Server is listening on port ' + port));
