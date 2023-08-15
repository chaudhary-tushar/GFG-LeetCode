#include<iostream>
#include<queue>
#include"../ds.h"
using namespace std;

void levelord(TNode<int>* root){
    queue<TNode<int>*> q;
    q.push(root);
    while(q.empty()==false){
        int n=q.size();
        for(int i=0;i<n;i++){
            TNode<int>* temp=q.front();
            cout<<temp->key<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            q.pop();
        }
        cout<<endl;
    }
    return;
}
void postorder(TNode<int>* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<" ";
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
    levelord(root);
    cout<<endl;
    postorder(root);
    return 0;
}