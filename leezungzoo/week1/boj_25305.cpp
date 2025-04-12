#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, k;
    cout << "학생수 >>";
    cin >> N;

    cout << "커트라인 학생수 >>";
    cin >> k;

    vector<int> x(N);
    cout << N << "명의 점수를 입력하세요>>";
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    sort(x.begin(), x.end(), greater<int>()); 
    cout << x[k-1] << endl;
    
    return 0;
}