#include<iostream>
#include<vector>
#include"../ds.h"
using namespace std;

void levelord(TNode<int>* root){
    Queue<TNode<int>*> q;
    q.enque(root);
    while(q.isEmpty()==false){
        int n=q.size();
        for(int i=0;i<n;i++){
            TNode<int>* temp=q.front();
            cout<<temp->key<<" ";
            if(temp->left!=NULL){
                q.enque(temp->left);
            }
            if(temp->right!=NULL){
                q.enque(temp->right);
            }
            q.deque();
        }
        cout<<endl;
    }
    return;
}

TNode<int>* maketree(vector<int> ino,vector<int> pre){
    if(ino.empty() || pre.empty()){
        return NULL;
    }
    TNode<int>* root=new TNode(pre[0]);
    int i =0;
    for(i;i<ino.size();i++){
        if(ino[i]==pre[0]){
            break;
        }
    }
    vector<int> lino(ino.begin(),ino.begin()+i);
    vector<int> rino(ino.begin()+i+1,ino.end());
    vector<int> lpre(pre.begin()+1,pre.begin()+i+1);
    vector<int> rpre(pre.begin()+i+1,pre.end());
    root->left=maketree(lino,lpre);
    root->right=maketree(rino,rpre);

    return root;
}
int preIndex=0;
TNode<int>* effmake(vector<int> ino,vector<int> pre, int is, int ie){
    if(is>ie){
        return NULL;
    }
    cout<<preIndex<<" ";
    TNode<int>* root= new TNode(pre[preIndex++]);
    int inIndex;
    for (int i=is;i<=ie;i++){
        if(ino[i]==root->key){
            inIndex=i;
            break;
        }
    }
    root->left=effmake(ino,pre,is,inIndex-1);
    root->right=effmake(ino,pre,inIndex+1,ie);
    return root;
}

int main(){
    // vector<int> q {20,10,30};
    // vector<int> q {40,20,50,10,30,80,70,90};
    vector<int> q {40,20,50,10,60,30,70};
    // vector<int> w {10,20,30};
    // vector<int> w {10,20,40,50,30,70,80,90};
    vector<int> w {10,20,40,50,30,60,70};
    TNode<int>* root=effmake(q,w,0,6);
    cout<<endl;
    levelord(root);
}