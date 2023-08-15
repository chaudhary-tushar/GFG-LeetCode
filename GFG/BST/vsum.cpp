#include<iostream>
#include"../ds.h"
using namespace std;

void vsum(BNode<int>* root,int i, vector<int> &arr){
    if(root==NULL){
        return;
    }
    arr[i]+=root->key;
    vsum(root->left,i-1,arr);
    vsum(root->right,i+1,arr);
}

int main(){
    vector<int> ins {60,40,80,20,50,70,100,10,30,90,110};
    BST<int> bt;
    for (auto i:ins){
        bt.insert(i);
    }
    int k=2*(bt.height())-1;
    vector<int> brr (k+1,0);
    int i=k/2;
    vsum(bt._root, i,brr);
    for (auto k:brr){
        cout<<k<<" ";
    }

    return 0;
}