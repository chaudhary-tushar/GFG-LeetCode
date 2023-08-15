#include<iostream>
#include"../ds.h"
using namespace std;

void lceil(vector<int> arr){
    BST<int> bt;
    
    for(auto j:arr){
        (bt.ceil(j)!=NULL)?cout<<bt.ceil(j)->key<<" " : cout<<-1<<" ";
        bt.insert(j);
    }
}
int main(){
    vector<int> arr{2,8,30,15,25,12};
    lceil(arr);
    return 0;
}