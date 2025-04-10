const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];
let lineCnt = 0;
let res = "";

rl.on('line', (line) => {
  input.push(line);
  lineCnt++;

  if (lineCnt === 5) {
    rl.close();
  }
}).on('close', () => {
  const maxLength = Math.max(...input.map((str) => str.length));

  for (let i = 0; i < maxLength; i++) {
    for (let j = 0; j < 5; j++) {
      if (input[j][i]) {
        res += input[j][i];
      }
    }
  }
  console.log(res);
  process.exit();
});