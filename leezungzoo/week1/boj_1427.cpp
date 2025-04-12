#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string n;
   
    cin >> n;
    
    sort(n.rbegin(), n.rend()); 

    cout << n << endl;
    
}