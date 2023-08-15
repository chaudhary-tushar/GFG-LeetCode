#include<iostream>
#include"../ds.h"
using namespace std;

void insend(LinkedList<int> &ll,int x){
    Node<int>* temp=new Node(x);
    if(ll.head==NULL){
        ll.head=temp;
    }
    Node<int>* curr=ll.head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
}
int main(){
    LinkedList<int> tl;
    tl.insert(5);
    tl.insert(10);
    tl.insert(15);
    tl.insert(20);
    insend(tl,100);
    tl.display();
    return 0;
}