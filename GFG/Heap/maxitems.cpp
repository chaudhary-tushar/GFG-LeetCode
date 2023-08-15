#include<iostream>
#include"../ds.h"
using namespace std;

void maxit(vector<int> &arr,int suma){
    MinHeap<int> mih;
    for(auto i:arr){
        mih.insert(i);
    }
    int i=0;
    while(suma>=0){
        int temp=mih.extractMin();
        if(suma<temp){
            break;
        }
        suma=suma-temp;
        i++;
        cout<<temp<<" ";
    }
    cout<<"\n"<<i;
    return;
}

int main(){
    vector<int> arr {1,12,5,111,200};
    int k=250;
    maxit(arr,k);
    return 0;
}