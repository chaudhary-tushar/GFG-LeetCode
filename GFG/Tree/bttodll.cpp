#include<iostream>
#include"../ds.h"
using namespace std;



TNode<int>* pre=nullptr;
TNode<int>* convdll(TNode<int>* root){
    if(root==nullptr){
        return nullptr;
    }
    TNode<int>* head=convdll(root->left);
    if(pre==nullptr){
        head=root;
    }
    else{
        root->left=pre;
        pre->right=root;
    }
    pre=root;
    convdll(root->right);
    return head; 
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
    cout<<pre<<endl;
    
    TNode<int>* curr=convdll(root);;
    while(curr!=NULL){
        cout<<curr->key<<"<=>";
        curr=curr->right;
    }
    return 0;
}