#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    set<string> unheard;
    vector<string> result;

    // 듣도 못한 사람 입력
    for (int i = 0; i < N; ++i) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    // 보도 못한 사람 확인
    for (int i = 0; i < M; ++i) {
        string name;
        cin >> name;
        if (unheard.find(name) != unheard.end()) {
            result.push_back(name);
        }
    }

    // 사전순 정렬
    sort(result.begin(), result.end());

    // 출력
    cout << result.size() << '\n';
    for (const auto& name : result) {
        cout << name << '\n';
    }

    return 0;
}
