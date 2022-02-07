const bodyParser = require('body-parser');
const express = require('express');
const https = require('https');
const app = express();
const port = 5000;

app.use(bodyParser.urlencoded({ extended: true }));

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});

app.post('/', (req, res) => {
  const query = req.body.cityName;
  const apiKey = '8cd51b12c3fcc2addfb1b7e2ec887dae';
  const unit = 'metric';
  const url =
    'https://api.openweathermap.org/data/2.5/weather?q=' +
    query +
    '&appid=' +
    apiKey +
    '&units=' +
    unit;

  https.get(url, (response) => {
    response.on('data', (data) => {
      const weatherData = JSON.parse(data);
      const temp = weatherData.main.temp;
      const weatherDesc = weatherData.weather[0].description;
      const icon = weatherData.weather[0].icon;
      const ImageUrl = 'http://openweathermap.org/img/wn/' + icon + '@2x.png';
      res.write('<p>The weather Currently ' + weatherDesc + '</p>');
      res.write(
        '<h1>The Temprature in ' +
          query +
          ' is ' +
          temp +
          ' Degree celsius.</h1>'
      );
      res.write('<img src=' + ImageUrl + '>');
      res.send();
    });
  });
});

app.listen(port, () => {
  console.log('Server is Running on port' + port);
});
