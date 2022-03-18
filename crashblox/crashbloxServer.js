const express = require('express');
const app = express();
const cors = require('cors');
var path = require('path')

const hostname = '192.168.0.171';
const port = 80

app.use(cors());
app.use(express.static(path.join(__dirname, 'Public')));


app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})


app.listen(port, hostname, () => console.log('WebGL Server is listening on port: ' + port));