## 📌 1주차

[구현, 정렬] [25305] 문제 풀이
[문자, 정렬] [1427] 문제 풀이
[정렬, 값 / 좌표 압축] [18870] 문제 풀이
---

## ✅ 해결한 문제
- [25305] 문제 1 커트라인 ([문제 링크](https://www.acmicpc.net/problem/25305))
- [1427] 문제 2 소트인사이드 ([문제 링크](https://www.acmicpc.net/problem/1427))
- [18870] 문제 3 좌표 압축 ([문제 링크](https://www.acmicpc.net/problem/18870))

---

## 💡 문제 해결 방법 및 핵심 로직
### - 문제 1: 25305 커트라인
  - 해결 방법:점수 입력 -> 내림차순 정렬 -> k번쨰 점수 출력.
  - 핵심 로직:sort(scores.rbegin(), scores.rend()); 를 사용해서 내림차순으로 정렬한다.
```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    sort(scores.rbegin(), scores.rend()); // 내림차순 정렬
    cout << scores[k-1] << endl; // k번째 점수 출력
    
    return 0;
}
```

### - 문제 2: 1427 소트인사이드
  - 해결 방법:숫자를 문자열로 변환 → 내림차순 정렬 → 출력.
  - 핵심 로직:sort(N.rbegin(), N.rend());를 사용하여 문자열을 내림차순으로 정렬.
```
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N; // 숫자를 문자열로 입력받음

    // 문자열을 내림차순으로 정렬
    sort(N.rbegin(), N.rend());

    // 정렬된 문자열 출력
    cout << N << endl;

    return 0;
}
```

### - 문제 3: 18870 좌표 압축
  - 해결 방법: 입력받은 좌료 정렬 -> 중복 제거 -> 좌표 압축 매핑 생성 -> 원래 좌표를 압축된 값으로 변환
  - 핵심 로직: sorted_x.erase(unique(sorted_x.begin(), sorted_x.end()), sorted_x.end());에서 unique와 erase를 같이 사용해 정렬된 상태의 수들 중복된 수 제거, unorderd_map을 이용한 좌표 압축 매핑 생성 
```
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    // 원본 벡터 복사 및 정렬
    vector<int> sorted_x = x;
    sort(sorted_x.begin(), sorted_x.end());

    // 중복 제거
    sorted_x.erase(unique(sorted_x.begin(), sorted_x.end()), sorted_x.end());

    // 좌표 압축 매핑
    unordered_map<int, int> coord_map;
    for (int i = 0; i < sorted_x.size(); i++) {
        coord_map[sorted_x[i]] = i;
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        cout << coord_map[x[i]] << " ";
    }
    cout << endl;

    return 0;
}
```


---

## ✨ 기타 참고 사항
- 예제 입력/출력과 실행 결과 : 많이 시도한 결과 정상적으로 처리 됨
- 고민했던 부분이나 어려웠던 점 : 3번에서 erase와 unique를 같이 사용하는 부분이나 unordered_map을 사용하는 등 생소한 부분들을 공부하게 됨
- 추가로 개선할 사항 : 좀 더 집념있게 하나를 붙잡고 오래 해봐야겠다.
