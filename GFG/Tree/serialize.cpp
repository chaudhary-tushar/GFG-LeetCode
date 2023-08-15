#include<iostream>
#include"../ds.h"
using namespace std;

const int EMPTY=-1;
void serialize(TNode<int>* root,vector<int> &arr){
    if(root==NULL){
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->key);
    serialize(root->left,arr);
    serialize(root->right,arr);
}
int ind=0;
TNode<int>* deserialize(vector<int> &res){
    if(ind==res.size()){return NULL;}
    int val=res[ind];
    ind++;
    if(val==-1){return NULL;}
    TNode<int>* root=new TNode(val);
    root->left=deserialize(res);
    root->right=deserialize(res);
    return root;
}

void inorder(TNode<int>* root){
    if(root==NULL){return;}
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}


int main(){
    // TNode<int>* root=new TNode(40);
    // root->left=new TNode(30);
    // root->left->left=new TNode(25);
    // root->left->left->left=new TNode(15);
    // root->left->right=new TNode(35);
    // root->left->left->right=new TNode(28);
    // root->right=new TNode(50);
    // root->right->left=new TNode(45);
    // root->right->right=new TNode(60);
    // root->right->right->right=new TNode(70);
    // root->right->right->left=new TNode(55);
    vector<int> res {40, 30, 25, 15, -1, -1, 28, -1, -1, 35, -1, -1, 50, 45, -1, -1, 60, 55, -1, -1, 70, -1, -1};
    TNode<int>* root= deserialize(res);
    // for(auto i:res){
    //     cout<<i<<" ";
    // }
    inorder(root);
    return 0;
}