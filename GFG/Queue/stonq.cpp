#include<iostream>
#include"../ds.h"
using namespace std;

class mSt{
    public:
    mSt() : sz(0) {}
    Queue<int> q1,q2;
    int sz;
    int size(){
        return sz;
    }
    bool isEmpty(){
        return sz==0;
    }
    void push(int data){
        while(q1.isEmpty()==false){
            q2.enque(q1.deque());
        }
        q1.enque(data);
        while(q2.isEmpty()==false){
            q1.enque(q2.deque());
        }
        sz++;
    }
    int pop(){
        sz--;
        return q1.deque();
    }
    int peek(){
        return q1.front();
    }
};

int main(){
    mSt s;
    for(int i=1;i<11;i++){
        s.push(i*10);
    }
    cout<<s.size()<<" "<<s.isEmpty()<<endl;
    while(s.isEmpty()==false){
        cout<<s.pop()<<" ";
    }
    return 0;
}