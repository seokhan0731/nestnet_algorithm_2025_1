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