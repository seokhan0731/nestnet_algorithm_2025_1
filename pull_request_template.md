## 📌 [week1] choitaejin

[알고리즘 ] [문제 번호] 문제 풀이

---

## ✅ 해결한 문제
- [ ] 문제 1 제목 (문제 링크)
- [ ] 문제 2 제목 (문제 링크)
- [ ] 문제 3 제목 (문제 링크)
- [ ] 문제 4 제목 (문제 링크)

---

## 💡 문제 해결 방법 및 핵심 로직
### - 문제 1: 25305
  - 해결 방법: 입력받은 array를 sort 후 array[k-1] 값을 print 해주면 된다.
  - 핵심 로직: sort
```node.js
  const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];
let N, K;
let lineCnt = 0;
let score = [];

rl.on('line', (line) => {
  input.push(line);
  lineCnt++;

  if (lineCnt == 1) {
    [N, K] = line.split(' ').map(Number);
  }
  else if (lineCnt == 2) {
    score = line.split(' ').map(Number);
    rl.close();
  }


}).on('close', () => {
    score.sort((a,b) => b-a);

    console.log(score[K - 1]);

    process.exit();
});
```

### - 문제 2: 1427
  - 해결 방법: 입력받은 숫자를 자릿수로 나누어 array에 저장 후 내림차순 sort 후 배열을 다시 하나의 숫자로 merge
  - 핵심 로직: 숫자를 자릿수로 나누어 array에 저장하기.   ex) 123 -> [1,2,3].
              내림차순 정렬하고 다시 숫자 하나로 merge.   ex) [3,2,1] -> 321.
```
  const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];
let arr = [];

rl.on('line', (line) => {
    input.push(line);
    arr = line.split('').map(Number);
    rl.close();

}).on('close', () => {
    arr.sort((a,b) => b - a);
    const res = parseInt(arr.join(''));
    console.log(res);
    process.exit();
});
```

### - 문제 3: 18870
  - 해결 방법: target 좌표값과 나머지 좌표값을 비교하여 target보다 작은 개수를 count한 array 생성 및 출력
              그런데 그냥 입력 array 정렬하면 sortedArray의 index값이 해당 요소보다 작은 요소의 개수이다.
              ex) [3, 1, 2] -> [1 => 0, 2 => 1, 3 => 2] : [요소 => index값]
  - 핵심 로직: 1 ≤ N ≤ 1,000,000 / -109 ≤ Xi ≤ 109 이 제한조건 이므로 for문을 사용해서 좌표값들을 비교하면 시간초과 발생
              1. 입력 array에서 중복을 제거하고 정렬
              2. 정렬된 array에서 ForEach로 Map 생성
              3. arr.map()을 사용하여 arr의 각 요소에 대해 resMap에서 index를 찾아 res array 생성
              4. 문제 조건에 맞게 결과 출력
```
  const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];
let lineCnt = 0;
let n;
let arr = [];
let res = [];

rl.on('line', (line) => {
  input.push(line);
  lineCnt++;

  if (lineCnt === 1) {
    n = Number(line);
  } else if (lineCnt === 2) {
    arr = line.split(' ').map(Number);
    rl.close();
  }
}).on('close', () => {
  const sortedArr = [...new Set(arr)].sort((a, b) => a - b);
  const resMap = new Map();

  sortedArr.forEach((num, index) => {
    resMap.set(num, index);
  });

  res = arr.map((num) => resMap.get(num));

  console.log(res.join(' '));

  process.exit();
});
```

### - 문제 4:
  - 해결 방법:
  - 핵심 로직:
```
  코드를 입력해주세요
```


---

## ✨ 기타 참고 사항
- 예제 입력/출력과 실행 결과 : 굳
- 고민했던 부분이나 어려웠던 점 : JS로 알고리즘 문제풀이가 처음이라 함수나 메서드를 찾아봐야했음
- 추가로 개선할 사항 : 따로 함수랑 메서드를 정리해야겠다.
