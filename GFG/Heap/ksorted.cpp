#include<iostream>
#include"../ds.h"
using namespace std;


void ksort(vector<int> &arr,int k){
    MinHeap<int> q;
    for(int i=0;i<=k;i++){
        q.insert(arr[i]);
    }
    int ind=0;
    for(int j=k+1;j<arr.size();j++){
        arr[ind++]=q.heap[0];
        q.insert(arr[j]);
    }
    ind=0;
    while(q.isEmpty()==false){
        arr[ind++]=q.heap[0];
        q.extractMin();
    }
    return;
}

int main(){
    vector<int> arr{9,8,7,18,19,17};
    // vector<int> arr{10,9,7,8,4,70,50,60};
    int k=2;
    ksort(arr,k);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}