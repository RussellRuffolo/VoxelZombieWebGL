const express = require('express');
const app = express();
const cors = require('cors');
var path = require('path')

const hostname = '192.168.0.171';
const localHostName = '127.0.0.1';
const port = 4555;

app.use(cors());
app.use(express.static(path.join(__dirname, 'Public')));

// middleware
app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
 //   res.header("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept")
    next()
  })
  

//app.get('/', (req, res) => {
//    res.sendFile(__dirname + "/index.html");
//  });

app.listen(port, localHostName, () => console.log('Example app is listening on port: ' + port));