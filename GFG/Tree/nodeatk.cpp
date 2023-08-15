#include<iostream>
#include"../ds.h"
using namespace std;

void atk(TNode<int>* root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->key<<" ";
    }
    else{
        atk(root->left,k-1);
        atk(root->right,k-1);
    }
}

int main(){
    TNode<int>* root=new TNode(40);
    root->left=new TNode(30);
    root->left->left=new TNode(25);
    root->left->left->left=new TNode(15);
    root->left->right=new TNode(35);
    root->left->left->right=new TNode(28);
    root->right=new TNode(50);
    root->right->left=new TNode(45);
    root->right->right=new TNode(60);
    root->right->right->right=new TNode(70);
    root->right->right->left=new TNode(55);
    atk(root,2);
    return 0;
}