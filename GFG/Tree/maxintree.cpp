#include<iostream>
#include"../ds.h"
using namespace std;

int fmax(TNode<int>* root){
    if(root==NULL){
        return INT8_MIN;
    }
    return max(root->key,max(fmax(root->left),fmax(root->right)));
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
    cout<<fmax(root)<<endl;
    cout<<INT16_MIN<<" "<<INT32_MIN<<" "<<INT8_MIN<<endl;
    return 0;
}