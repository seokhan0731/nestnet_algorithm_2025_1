
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
