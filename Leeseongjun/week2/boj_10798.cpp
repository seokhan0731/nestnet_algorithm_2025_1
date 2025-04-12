#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words(5);

    // 5줄 입력받기
    for (int i = 0; i < 5; ++i) {
        cin >> words[i];
    }

    // 세로로 읽기
    for (int col = 0; col < 15; ++col) {
        for (int row = 0; row < 5; ++row) {
            if (col < words[row].length()) {
                cout << words[row][col];
            }
        }
    }

    cout << '\n';
    return 0;
}
