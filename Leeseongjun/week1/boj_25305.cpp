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