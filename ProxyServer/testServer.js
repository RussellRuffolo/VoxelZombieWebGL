const http = require("http")
const express = require("express")
app = express()
const port = 25565

app.get("/", (req, res) => {
  res.send({"msg": "YOU DID IT"})
});

http.createServer({}, app).listen(port, () => console.log("Listening on port " + port));