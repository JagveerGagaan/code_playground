const express = require('express');
const app = express();
const port = 3000;

app.get('/', (req, res) => {
  res.send('Hello World');
});

// setting port details here
app.listen(port, () => {
  console.log(`Server started on Port No. ${port}`);
});
