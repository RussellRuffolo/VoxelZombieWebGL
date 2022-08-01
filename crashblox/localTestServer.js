const express = require('express');
const app = express();
const cors = require('cors');
var path = require('path')


app.use(cors());
app.use(express.static(path.join(__dirname, 'Public/Static')));

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'index.html'))
  })


app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})

app.listen(80, '127.0.0.1', () => console.log('WebGL Server is listening on port: 80' ));