#include<iostream>
#include"../ds.h"
using namespace std;

TNode<int>* pre=NULL, *first=NULL, *second=NULL;
void fixb(TNode<int>* root){
    if(root==NULL){
        return;
    }
    fixb(root->left);
    if(pre!=NULL && root->key<pre->key){
        if(first==NULL){
            first=pre;
        }
        second=root;
    }
    pre=root;
    fixb(root->right);
}
void inorder(TNode<int>* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int main(){
    TNode<int> * root= new TNode(20);
    root->left=new TNode(60);
    root->left->left=new TNode(4);
    root->left->right=new TNode(10);
    root->right=new TNode(80);
    root->right->left=new TNode(8);
    root->right->right=new TNode(100);
    inorder(root);
    fixb(root);
    swap(first->key,second->key);
    cout<<endl;
    inorder(root);
    return 0;
}