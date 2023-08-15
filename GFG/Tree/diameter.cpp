#include<iostream>
#include"../ds.h"
using namespace std;

int height(TNode<int>* root){
    if (root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

int dia(TNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(1+lh+rh,max(dia(root->left),dia(root->right)));
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
    cout<<dia(root);

    return 0;
}