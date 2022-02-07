const bodyParser = require('body-parser');
const express = require('express');
const request = require('request');

const app = express();
const port = 5000;

app.use(express.static('public'));
app.use(bodyParser.urlencoded({ extended: true }));

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/signup.html');
  console.log('Get your request in sgnup');
});

app.post('/', (req, res) => {
  const firstName = req.body.fName;
  const lastName = req.body.lName;
  const email = req.body.email;
  console.log(firstName, lastName, email);
});

app.listen(port, () => {
  console.log('server started on port no ' + port);
});

// API KEY = 040879507c55a07e447b7a96d3331d10-us14
