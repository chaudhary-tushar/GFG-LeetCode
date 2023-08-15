#include<iostream>
#include"../ds.h"
using namespace std;

void delend(LinkedList<int> &ll){
    if(ll.head == NULL || ll.head->next==NULL){
        return;
    }
    Node<int>* curr=ll.head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    Node<int>* temp=curr->next;
    curr->next=NULL;
    delete temp;
}

int main(){
    LinkedList<int> tl;
    tl.insert(5);
    tl.insert(10);
    tl.insert(15);
    tl.insert(20);
    delend(tl);
    tl.display();
    return 0;
}