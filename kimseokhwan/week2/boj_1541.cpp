#include <iostream>
#include <string>
using namespace std;

bool mode=false;

int total(string a,int size);

int main(){
    string a;
    cin>>a;
    int size=a.size();
    cout<<total(a,size);

    return 0;

}


int total(string a,int size){
    int total=0;
    int num=0;
    string num_str="";
    for(int i=0;i<size;i++){
        if(isdigit(a[i])){
            num_str+=a[i];
        }
        else{
            num=stoi(num_str);
            if(mode){
                total-=num;
            }
            else{
                total+=num;
            }
            if(a[i]=='-'){
                mode=true;
            }
            num_str="";
        }
    }
    num=stoi(num_str);
    if(mode){
        total-=num;
    }
    else{
        total+=num;
    }
    return total;
}