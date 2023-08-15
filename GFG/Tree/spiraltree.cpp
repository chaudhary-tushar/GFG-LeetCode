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
void spiral(TNode<int>* root){
    queue<TNode<int>*> q;
    q.push(root);
    bool reverse=false;
    Stack<TNode<int>*> s;
    while(q.empty()==false){
        int n=q.size();
        for(int j=0;j<n;j++){
            TNode<int>* temp=q.front();
            q.pop();
            if(reverse){
                s.push(temp);
            }
            else{cout<<temp->key<<" ";}
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }   
        }
        if(reverse){
            while(s.isEmpty()==false){
                cout<<s.pop()->key<<" ";
            }
        }
        reverse=!reverse;
        cout<<endl;
    }
    return;
}

void stpiral(TNode<int>* root){
    Stack<TNode<int>*> st1;
    Stack<TNode<int>*> st2;
    st1.push(root);
    while(st1.isEmpty()==false || st2.isEmpty()==false){
        while(st1.isEmpty()==false){
            TNode<int>* temp=st1.peek();
            st1.pop();
            cout<<temp->key<<" ";
            if(temp->left!=NULL){
                st2.push(temp->left);
            }
            if(temp->right!=NULL){
                st2.push(temp->right);
            }
        }
        cout<<endl;
        while(st2.isEmpty()==false){
            TNode<int>* temp=st2.peek();
            st2.pop();
            cout<<temp->key<<" ";
            if(temp->right!=NULL){
                st1.push(temp->right);
            }
            if(temp->left!=NULL){
                st1.push(temp->left);
            }
        }
        cout<<endl;
    }
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
    stpiral(root);
    return 0;
}