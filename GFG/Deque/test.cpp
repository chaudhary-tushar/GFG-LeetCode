#include<iostream>
#include"../ds.h"
using namespace std;

int main(){
    Deque<int> dq;
    for (int i=1;i<11;i++){
        dq.insertf(i*10);
        dq.insertr(i*5);
    }
    for(auto i:dq.arr){
        cout<<i<<" * ";
    }
    cout<<endl;
    cout<<dq.getf()<<" "<<dq.getr()<<endl;
    while(dq.isEmpty()==false){
        cout<<dq.deletef()<<" ";
    }
    cout<<endl;
    while(dq.isEmpty()==false){
        cout<<dq.deleter()<<" ";
    }
    return 0;

}