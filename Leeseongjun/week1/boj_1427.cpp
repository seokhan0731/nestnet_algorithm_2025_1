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