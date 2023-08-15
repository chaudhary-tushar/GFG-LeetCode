#include<iostream>
#include"../ds.h"
using namespace std;

bool csum(TNode<int>* root){
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    int sum=0;
    if(root->left!=NULL){sum+=root->left->key;}
    if(root->right!=NULL){sum+=root->right->key;}
    
    return(root->key==sum && csum(root->left) && csum(root->right));
}

int main(){
    TNode<int>* root=new TNode(20);
    root->left=new TNode(8);
    root->left->left=new TNode(3);
    // root->left->left->left=new TNode(15);
    root->left->right=new TNode(5);
    // root->left->left->right=new TNode(28);
    root->right=new TNode(12);
    // root->right->left=new TNode(45);
    // root->right->right=new TNode(60);
    // root->right->right->right=new TNode(70);
    // root->right->right->left=new TNode(55);
    cout<<csum(root);
    return 0;
}