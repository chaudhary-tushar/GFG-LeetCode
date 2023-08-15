#include<iostream>
#include<map>
#include"../ds.h"
using namespace std;

void vertical(BNode<int>* node, int i,map<int,vector<int>> &mdict){
    if(node==NULL){
        return ;
    }
    vertical(node->left,i-1,mdict);
    if(mdict.find(i)==mdict.end()){
        vector<int> q {node->key};
        mdict.insert({i,q});
    }
    else{
        mdict[i].push_back(node->key);
    }
    vertical(node->right,i+1,mdict);
}

int main(){
    BST<int> bst;
    vector<int> arr {50,30,70,20,40,60,80,100};
    for (auto i:arr){
        bst.insert(i);
    }
    map<int,vector<int>> mdict;
    bst.levelorder();
    cout<<endl;
    vertical(bst._root,0,mdict);
    for(auto &pair:mdict){
        cout<<pair.first<<" * ";
        for(auto l:pair.second){
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}