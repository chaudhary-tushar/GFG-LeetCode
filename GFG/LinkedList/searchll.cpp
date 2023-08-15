#include<iostream>
#include"../ds.h"
using namespace std;

int searchl(LinkedList<int> &ll,int x){
    if(ll.head ==NULL ){
        return -1;
    }
    int k=0;
    Node<int>* curr=ll.head;
    while(curr!=NULL){
        if(curr->data==x){
            return k;
        }
        curr=curr->next;
        k++;
    }
    return -1;
}

int main(){
    LinkedList<int> tl;
    tl.insert(5);
    tl.insert(10);
    tl.insert(15);
    tl.insert(20);
    cout<<searchl(tl,5)<<endl;
    tl.display();
    return 0;
}