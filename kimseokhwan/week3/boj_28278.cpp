#include <iostream>
#include <vector>
using namespace std;

class stack{

public:


vector<int>stack;


void push(int x);
void print_without_top();
void num();
void empty();
void print_top();


};

void stack:: push(int x){
stack.push_back(x);

}

void stack:: print_without_top(){
if(!stack.empty()){
    cout<<*(stack.end()-1)<<"\n";
stack.erase(stack.end()-1);

}
else{
    cout<<"-1\n";
}

}

void stack:: num(){

cout<<stack.size()<<"\n";

}

void stack:: empty(){
if(stack.empty()){
    cout<<"1\n";
}
else{
    cout<<"0\n";
}
}

void stack:: print_top(){
if(!stack.empty()){
cout<<*(stack.end()-1)<<"\n";

}
else{

cout<<"-1\n";
}
}



int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
stack a;
int n=0;    //n은 명령의 수
cin>>n;
int cmd;
for(int i=0;i<n;i++){
cin>>cmd;
if(cmd==1){
    int element=0;
    cin>>element;
    a.push(element);
}
else if(cmd==2){
    a.print_without_top();
}
else if(cmd==3){
    a.num();
}
else if(cmd==4){
    a.empty();
}
else{
    a.print_top();
}
}

return 0;
}