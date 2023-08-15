#include<iostream>
#include<map>
#include"../ds.h"
using namespace std;

class curbj{
    public:
    BNode<int>* cur;
    int i ;
    curbj(BNode<int>* cer,int data){
        cur=cer;
        i=data;
    }
};

void vertical(BNode<int>* node, map<int,vector<int>> &mdict){
    if(node==NULL){
        return ;
    }
    Queue<curbj> qa;
    curbj rot (node,0);
    qa.enque(rot);
    while(qa.isEmpty()==false){
        curbj temp=qa.front();
        qa.deque();
        BNode<int>* curr=temp.cur;
        int j=temp.i;
        if(mdict.find(j)==mdict.end()){
            vector<int> q {curr->key};
            mdict.insert({j,q});
        }
        else{
            mdict[j].push_back(curr->key);
        }
        if(curr->left!=NULL){
            curbj rot(curr->left,j-1);
            qa.enque(rot);
        }
        if(curr->right!=NULL){
            curbj rot(curr->right,j+1);
            qa.enque(rot);
        }
        
    }

}

int main(){
    BST<int> bst;
    vector<int> arr {50,30,70,20,40,60,80,100,35,45,55,65,15};
    for (auto i:arr){
        bst.insert(i);
    }
    map<int,vector<int>> mdict;
    bst.levelorder();
    cout<<endl;
    vertical(bst._root, mdict);
    for(auto &pair:mdict){
        cout<<pair.first<<" * "<<pair.second[0];
        
        cout<<endl;
    }
    return 0;
}