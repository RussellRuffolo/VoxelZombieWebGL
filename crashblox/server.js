const express = require('express');
const cors = require('cors');
const helmet = require('helmet')
const path = require('path');

const app = express();

const hostname = '0.0.0.0';
const port = 80

app.use(cors());
// app.use(helmet())
// //Todo: Use nonce
// app.use(
//     helmet.contentSecurityPolicy({
//         directives: {
//             scriptSrc: ["'self'", "'unsafe-inline'", 'blob:http://localhost:8000/']
//         }
//     })
// )
// app.use(
//     helmet({
//         contentSecurityPolicy: false
//     })
// )
app.use(express.static(path.join(__dirname, 'Public')));

app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*")
    next()
})

app.listen(port, hostname, () => console.log('WebGL Server is listening on ' + hostname + ':' + port));
