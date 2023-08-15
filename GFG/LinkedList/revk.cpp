#include<iostream>
#include"../ds.h"
using namespace std;


Node<int>* revk(Node<int>* head,int k){
    Node<int>* curr=head;
    Node<int>* prev=NULL,*nert=NULL;
    int i=0;
    while(curr!=NULL && i<k){
        nert=curr->next;
        curr->next=prev;
        prev=curr,curr=nert;
        i++;
    }
    if(nert!=NULL){
        Node<int>* rest_head=revk(nert,k);
        head->next=rest_head;
    }

    return prev;
}

int main(){
    LinkedList<int> dll;
    for(int i=1;i<21;i++){
        dll.insert(i*10);
    }
    dll.display();
    dll.head=revk(dll.head,3);
    cout<<endl;
    dll.display();
    return 0;
}