const express = require('express');
const helmet = require('helmet')
const path = require('path');

const app = express();

const hostname = '0.0.0.0';
const port = 80

app.use(helmet({
    crossOriginResourcePolicy: {policy: "same-site"},
    contentSecurityPolicy:  {directives: {
        "script-src": ["'self'", "'unsafe-inline'", "blob:"],
        // Todo: ensure security with people who know more about the web
        "default-src": ["'self'", "blob:", "*\." + process.env.DOMAIN]
    }}
}))
app.use(express.static(path.join(__dirname, 'Public')));

// Todo: this feels like it should be part of helmet, but I couldn't figure out where to set it
app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})

app.listen(port, hostname, () => console.log('WebGL Server is listening on ' + hostname + ':' + port));
