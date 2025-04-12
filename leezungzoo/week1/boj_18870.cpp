#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    vector<int> sortedX = X;
    sort(sortedX.begin(), sortedX.end());
    sortedX.erase(unique(sortedX.begin(), sortedX.end()), sortedX.end());

    map<int, int> compress;
    for (int i = 0; i < sortedX.size(); i++) {
        compress[sortedX[i]] = i;
    }

    for (int i = 0; i < N; i++) {
        cout << compress[X[i]] << " ";
    }
    cout << endl;

}
