#include<iostream>
#include<vector>
using namespace std;

class KNode{
public:
    KNode(int x) : key(x), left(nullptr), right(nullptr), lcount(0) {}
    int key;
    KNode* left;
    KNode* right;
    int lcount;
    KNode* insert(KNode* node,int data);
    void inorder(KNode* root);
};

void insert(KNode* node, int data){
    if(node==NULL){
        KNode* treod = new KNode(data);
        node=treod;
        return ;
    }
    else{
        if(node->key>data){
            if(node->left==NULL){
                node->lcount++;
                KNode* treod = new KNode(data);
                node->left=treod;
            }
            else{
                node->lcount++;
                insert(node->left,data);
            }
        }
        else{
            if(node->right==NULL){
                KNode* treod = new KNode(data);
                node->right=treod;
            }
            else{
                insert(node->right,data);
            }
        }
    }
    return ;
}
void inorder(KNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" * "<<root->lcount<<endl;
    inorder(root->right);
}

int main(){
    vector<int> arr {20,100,10,40,70,120,4,60,80};
    KNode* root=new KNode(50);

    for (auto i:arr){
        insert(root,i);
    }

    inorder(root);
    return 0;
}