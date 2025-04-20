#include <iostream>
#include <string>
#include <queue>
using namespace std;


class my_queue{
queue <int> my_queue;

public:
void push(int x);
void pop();
void size();
void empty();
void front();
void back();

};

void my_queue::push(int x){
my_queue.push(x);

}
void my_queue::pop(){
    
    if(!my_queue.empty()){
        cout<<my_queue.front()<<"\n";
        my_queue.pop();
    }
    else{
        cout<<"-1\n";
    }
}
void my_queue::size(){
cout<<my_queue.size()<<"\n";

}
void my_queue::empty(){

if(!my_queue.empty()){
    cout<<"0\n";
}
else{
    cout<<"1\n";
}
}
void my_queue::front(){
    if(!my_queue.empty()){
        cout<<my_queue.front()<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    

}
void my_queue::back(){
    if(!my_queue.empty()){
        cout<<my_queue.back()<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    }




int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

my_queue a;
string input="";

int k=0;
int n=0;

cin>>n;
for(int i=0;i<n;i++){
cin>>input;
if(input=="push"){
    cin>>k;
    a.push(k);
}
else if(input=="pop"){
    a.pop();
}
else if(input=="size"){
    a.size();
}
else if(input=="empty"){
    a.empty();
}
else if(input=="front"){
    a.front();
}
else{
    a.back();
}
}


return 0;

}