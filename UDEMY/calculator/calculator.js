const express = require('express');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.urlencoded({ extended: true }));

const port = 3000;

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});

app.post('/', (req, res) => {
  var num1 = Number(req.body.num1);
  var num2 = Number(req.body.num2);
  var calculate = num1 + num2;
  res.send('The sum of number is :- ' + calculate);
});

app.get('/bmicalculator', (req, res) => {
  res.sendFile(__dirname + '/bmicalculator.html');
});

app.post('/bmicalculator', (req, res) => {
  var weight = parseFloat(req.body.weight);
  var height = parseFloat(req.body.height);
  var bmiResult = weight / (height * height);
  res.send('Your BMI is :- ' + bmiResult);

  // if (bmiResult < 19) {
  //   return bmiRes;
  // } else if (bmiResult > 19 && bmiResult < 25) {
  //   return bmiRes;
  // } else if (bmiResult > 25 && bmiResult < 30) {
  //   return bmiRes;
  // }else if(bmiResult > 30) (
  //   return bmiRes;
  // )
});

// setting port details here
app.listen(port, () => {
  console.log(`Server started on Port No. ${port}`);
});
