#include<iostream>
#include"../ds.h"
using namespace std;

void reverseq(Queue<int> &q){
    Stack<int> st;
    while(!q.isEmpty()){
        st.push(q.deque());
    }
    while(!st.isEmpty()){
        q.enque(st.pop());
    }
    return;
}

int main (){
    Queue<int> qa;
    for (int i=1;i<11;i++){
        qa.enque(i*10);
    }
    reverseq(qa);
    while(qa.isEmpty()==false){
        cout<<qa.deque()<<" ";
    }
    return 0;
}