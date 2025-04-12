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
    int N, k; 
    cin >> N >> k; 
    int x[N];

    for(int i=0; i<N; i++){
        cin >> x[i]; 
    }
    sort(x, x+N); 
    cout << x[N-k]; 
   
}


