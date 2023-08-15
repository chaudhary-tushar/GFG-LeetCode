#include<iostream>
#include"../ds.h"
using namespace std;

void reversedl(DLList<int> &dl){
    if(dl.head==nullptr){
        return;
    }
    DNode<int>*curr=dl.head;
    DNode<int>* pre=NULL;
    while(curr!=nullptr){
        pre=curr->prev;
        curr->prev=curr->next;
        curr->next=pre;
        curr=curr->prev;
    }
    dl.head=pre->prev;
    return;
}
int main(){
    DLList<int> dll;
    dll.insert(5);
    dll.insert(10);
    dll.insert(15);
    dll.insert(20);
    dll.display();
    reversedl(dll);
    dll.display();
    return 0;
}