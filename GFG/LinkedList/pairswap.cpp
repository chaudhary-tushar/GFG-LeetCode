#include<iostream>
#include"../ds.h"
using namespace std;

void pswap(LinkedList<int> &dl){
    Node<int>* curr=dl.head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
    return;
}
int  main(){
    LinkedList<int> dll;
    for (int i=1;i<21;i++){
        dll.insert(i*10);
    }
    pswap(dll);
    dll.display();
    return 0;
}