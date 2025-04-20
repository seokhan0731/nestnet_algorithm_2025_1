#include <iostream>
#include <deque>
using namespace std;
class my_deque{
deque <int> my_deque;


public:
void push_front(int x);
void push_back(int x);
void pop_front();
void pop_back();
void size();
void empty();
void front();
void back();
};

void my_deque::push_front(int x){
my_deque.push_front(x);
}

void my_deque::push_back(int x){
my_deque.push_back(x);
}

void my_deque::pop_front(){
    if(!my_deque.empty()){
        cout<<my_deque.front()<<"\n";
        my_deque.pop_front();
    }
    else{
        cout<<"-1\n";
    }
}

void my_deque::pop_back(){
    if(!my_deque.empty()){
        cout<<my_deque.back()<<"\n";
        my_deque.pop_back();
    }
    else{
        cout<<"-1\n";
    }
}

void my_deque::size(){
cout<<my_deque.size()<<"\n";
}

void my_deque::empty(){
    if(!my_deque.empty()){
        cout<<"0\n";
    }
    else{
        cout<<"1\n";
    }
}

void my_deque::front(){
    if(!my_deque.empty()){
        cout<<my_deque.front()<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}

void my_deque::back(){
    if(!my_deque.empty()){
        cout<<my_deque.back()<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}






int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

my_deque a;
int n=0;
int cmd=0;
int x=0;
cin>>n;
for(int i=0;i<n;i++){

cin>>cmd;
switch ((cmd)){
    case 1:{
        cin>>x;
        a.push_front(x);
        break;
    }
    case 2:{
        cin>>x;
        a.push_back(x);
        break;
    }
    case 3:{
        a.pop_front();
        break;
    }
    case 4:{
        a.pop_back();
        break;
    }
    case 5:{
        a.size();
        break;
    }
    case 6:{
        a.empty();
        break;
    }
    case 7:{
        a.front();
        break;
    }
    default:{
        a.back();
        break;
    }
}

}

return 0;

}