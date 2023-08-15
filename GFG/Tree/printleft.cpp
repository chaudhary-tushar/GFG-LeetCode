#include<iostream>
#include"../ds.h"
using namespace std;

int maxlevel=0;
void lrec(TNode<int>* root,int level){
    if(root==NULL){return;}
    if(maxlevel<level){
        cout<<root->key<<endl;
        maxlevel=level;
    }
    lrec(root->left,level+1);
    lrec(root->right,level+1);
}
void lprint(TNode<int>* root){
    Queue<TNode<int>*> q;
    q.enque(root);
    while(q.isEmpty()==false){
        int n=q.size();
        for(int i=0;i<n;i++){
            TNode<int>* curr=q.front();
            if(i==0){
                cout<<curr->key<<endl;
            }
            q.deque();
            if(curr->left!=NULL){q.enque(curr->left);}
            if(curr->right!=NULL){q.enque(curr->right);}
        }
    }
    return;
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
    // lrec(root,1);
    lprint(root);
    return 0;
}