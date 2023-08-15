#include<iostream>
#include"../ds.h"
using namespace std;

TNode<int>* lca(TNode<int>* root,int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->key==n1 || root->key==n2){
        return root;
    }
    TNode<int>* lca1=lca(root->left,n1,n2);
    TNode<int>* lca2=lca(root->right,n1,n2);
    if(lca1!=NULL && lca2!=NULL){return root;}
    if(lca1!=NULL){return lca1;}
    else{return lca2;}
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
    cout<<lca(root,28,15)->key;
    return 0;
}