#include<iostream>
#include"../ds.h"
using namespace std;

void insend(DLList<int> &dl,int x){
    DNode<int>* temp=new DNode(x);
    if(dl.head==nullptr){
        dl.head=temp;
        return;
    }
    DNode<int>* curr=dl.head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return;
}
int main(){
    DLList<int> dll;
    dll.insert(5);
    dll.insert(10);
    dll.insert(15);
    dll.insert(20);
    insend(dll,100);
    dll.display();
    return 0;
}