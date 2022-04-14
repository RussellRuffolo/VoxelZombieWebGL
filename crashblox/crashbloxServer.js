const express = require('express');
const app = express();
const cors = require('cors');
var path = require('path')

const configData = require('./config.json');

app.use(cors());
//app.use(express.static(path.join(__dirname, 'Public')));

app.get('/', (req, res) => {
    res.render('index')
  })

app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})

app.listen(configData.crashbloxServerPort, configData.hostAddress, () => console.log('WebGL Server is listening on port: ' + configData.crashbloxServerPort));