#include<iostream>
#include"../ds.h"
using namespace std;

void delend(DLList<int> &dl){
    if(dl.head==NULL){
        return;
    }
    DNode<int>* curr=dl.head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    DNode<int>* temp=curr->next;
    curr->next=NULL;
    delete temp;
    return;
}
int main(){
    DLList<int> dll;
    dll.insert(5);
    dll.insert(10);
    dll.insert(15);
    dll.insert(20);
    delend(dll);
    dll.display();
    return 0;
}