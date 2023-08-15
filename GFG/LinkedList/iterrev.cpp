#include<iostream>
#include"../ds.h"
using namespace std;

void revll(LinkedList<int> &dl){
    if(dl.head==NULL || dl.head->next==NULL){
        return;
    }
    Node<int>* curr=dl.head;
    dl.tail=dl.head;
    Node<int>* prev=NULL;
    Node<int>* pred=NULL;
    while(curr->next!=NULL){
        pred=curr->next;
        curr->next=prev;
        prev=curr;
        curr=pred;
    }
    dl.head=curr;
    curr->next=prev;
    return;
}
int main(){
    LinkedList<int> dll;
    for(int i=1;i<11;i++){
        dll.insert(i*10);
    }
    dll.display();
    revll(dll);
    dll.display();
    return 0;
}