## 📌 [week1] choitaejin

[구현, 정렬] [25305] 문제 풀이
[문자, 정렬] [1427] 문제 풀이
[정렬, 값 / 좌표 압축] [18870] 문제 풀이


---

## ✅ 해결한 문제
- [ ] 문제 1 커트라인 (https://www.acmicpc.net/problem/25305)
- [ ] 문제 2 소트인사이드 (https://www.acmicpc.net/problem/1427)
- [ ] 문제 3 좌표 압축 (https://www.acmicpc.net/problem/18870)
- [ ] 문제 4 제목 (문제 링크)

---

## 💡 문제 해결 방법 및 핵심 로직
### - 문제 1: 25305
  - 해결 방법: 해결 방법:점수 입력 -> 내림차순 정렬 -> k번째 점수 출력
  - 핵심 로직: 핵심 로직:sort(scores.rbegin(), scores.rend()); 를 사용해서 내림차순으로 정렬한다.
              
    
```#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <cstring>
#include <functional>
#include <sstream>
using namespace std;


int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int N, k; 
    cin >> N >> k; 
    int x[N];

    for(int i=0; i<N; i++){
        cin >> x[i]; 
    }
    sort(x, x+N); 
    cout << x[N-k]; 
   
}



```

### - 문제 2: 1427
  - 해결 방법: 해결 방법:숫자를 문자열로 변환 → 내림차순 정렬 → 출력
  - 핵심 로직: sort(num.begin(), num.end(), greater<char>()); 를 사용하여 문자열을 내림차순으로 정렬.
```// 백준 1427
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <cstring>
#include <functional>
#include <sstream>

using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);  
    string num; 
    cin >> num; 

    sort(num.begin(), num.end(), greater<char>()); 

    cout << num; 

 }
 

```

### - 문제 3: 18870
  - 해결 방법: 입력받은 좌료 정렬 -> 중복 제거 -> 좌표 압축 매핑 생성 -> 원래 좌표를 압축된 값으로 변환
  - 핵심 로직: sorted_x.erase(unique(sorted_x.begin(), sorted_x.end()), sorted_x.end());에서 unique와 erase를 같이 사용해 정렬된 상태의 수들 중복된 수 제거, unorderd_map을 이용한 좌표 압축 매핑 생성
```
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <cstring>
#include <functional>
#include <sstream>

using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N; 
    cin >> N; 
    vector<int> arr(N); 
    vector<int> sortedarr;
    for(int i=0; i< N; i++){
        cin >> arr[i];
    }
    sortedarr = arr;
    sort(sortedarr.begin(), sortedarr.end());
    sortedarr.erase(unique(sortedarr.begin(), sortedarr.end()), sortedarr.end());

    map<int, int> m; 
    for(int i=0; i<sortedarr.size(); i++){
        m[sortedarr[i]] = i; 
    }
    
    for(int i=0; i<N; i++){
        cout << m[arr[i]] << " ";
    }

}

```

### - 문제 4:
  - 해결 방법:
  - 핵심 로직:
```
  코드를 입력해주세요
```


---

## ✨ 기타 참고 사항
- 예제 입력/출력과 실행 결과 : 정상적으로 출력됨
- 고민했던 부분이나 어려웠던 점 : 3번에서 erase와 unique를 같이 사용하는 부분이나 unordered_map을 사용하는 등 생소한 부분들을 공부하게 됨
- 추가로 개선할 사항 : 좀 더 집념있게 하나를 붙잡고 오래 해봐야겠다.