#include<iostream>
#include"../ds.h"
using namespace std;

int height(TNode<int>* root){
    return (root==NULL) ? 0 : max(height(root->left),height(root->right))+1;
}
bool isbal(TNode<int>* root){
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isbal(root->left) && isbal(root->right));

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
    cout<<isbal(root);
    return 0;
}