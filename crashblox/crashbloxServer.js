const express = require('express');
const app = express();
const cors = require('cors');
var path = require('path')

const configData = require('./config.json');

app.use(cors());
app.use(express.static(path.join(__dirname, 'Public/Static')));

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'Public/index.html'))
  })

  app.get('/landing.html', (req, res) => {
    res.sendFile(path.join(__dirname, 'Public/landing.html'))
  })

  app.get('/blog.html', (req, res) => {
    res.sendFile(path.join(__dirname, 'Public/blog.html'))
  })

  app.get('/developers.html', (req, res) => {
    res.sendFile(path.join(__dirname, 'Public/developers.html'))
  })

  app.get('/game.html', (req, res) => {
    res.sendFile(path.join(__dirname, 'Public/game.html'))
  })

app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})

app.listen(configData.crashbloxServerPort, configData.hostAddress, () => console.log('WebGL Server is listening on port: ' + configData.crashbloxServerPort));