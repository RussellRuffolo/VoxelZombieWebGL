const https = require('https');
const fs = require('fs');
const axios = require('axios');
// const wrtc = require('wrtc')
const express = require('express');
const app = express();
const cors = require('cors');
var path = require('path')

const hostname = '192.168.0.171';
const localHostName = '127.0.0.1';
const port = 443

app.use(cors());

app.use(express.json());

app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
  })


app.get('/get-offer', (req, res) => {

   try{   
    axios.get('http://127.0.0.1:25565/get-offer') .then(response => {
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

    axios.post('http://127.0.0.1:25565/send-answer-get-candidate', req.body)
    .then(function (response){
        console.log("Response data: ", response.data);
        res.send(response.data);
    })
    .catch(function (error){
        console.log(error);
    })


 });
 


const options = {
  key: fs.readFileSync('www.crashblox.net.key'),
  cert: fs.readFileSync('www.crashblox.net.crt')
};

https.createServer(options, app).listen(port, () => console.log('Proxy Server is listening on port: ' + port));