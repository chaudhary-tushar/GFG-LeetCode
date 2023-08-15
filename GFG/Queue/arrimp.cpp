#include<iostream>
#include"../ds.h"
using namespace std;

int main(){
    Queue<int> q;
    for(int i=1;i<11;i++){
        q.enque(i*10);
    }
    cout<<q.size()<<" "<<q.isEmpty()<<endl;
    while(q.isEmpty()==false){
        cout<<q.rear()<<" "<<q.front()<<endl;
        cout<<q.deque()<<endl;
    }
    return 0;
}