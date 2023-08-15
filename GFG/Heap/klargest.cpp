#include<iostream>
#include"../ds.h"
using namespace std;

void klar(vector<int> arr,int k){
    MaxHeap<int> q;
    for (auto i:arr){
        q.insert(i);
    }
    while(k>1){
        q.remove();
        k--;
    }
    cout<<q.remove()<<" ";
    return ;
}
int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,20,30,40,50};
    klar(arr,2);
    return 0;
}
