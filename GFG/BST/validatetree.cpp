#include<iostream>
#include"../ds.h"
using namespace std;

bool validate(TNode<int>* root,int low,int high){
    if(root==NULL){
        return true;
    }
    if(root->key>low && root->key<high){
        return (validate(root->left,low,root->key) && validate(root->right,root->key,high));
    }
    else{
        return false;
    }

}

int main(){
    TNode<int> * root= new TNode(20);
    root->left=new TNode(8);
    root->right=new TNode(30);
    root->right->left=new TNode(25);
    root->right->right=new TNode(35);
    cout<<validate(root,INT8_MIN,INT8_MAX)<<endl;
    return 0;
}