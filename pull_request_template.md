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
  - 핵심 로직: 숫자를 자릿수로 나누어 array에 저장하기 ex) 123 -> [1,2,3].
              내림차순 정렬하고 다시 숫자 하나로 merge ex) [3,2,1] -> 321.
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
  - 해결 방법:
  - 핵심 로직:
```
  코드를 입력해주세요
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
