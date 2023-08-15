#include<iostream>
#include"../ds.h"
using namespace std;

void sortedins(LinkedList<int> &dl,int x){
    Node<int>* temp=new Node(x);
    if(dl.head==NULL){
        dl.head=temp;
        return;
    }
    Node<int>* curr=dl.head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return;
}

int main (){
    LinkedList<int> dll;
    dll.insert(10);
    dll.insert(20);
    dll.insert(30);
    dll.insert(40);
    sortedins(dll,25);
    dll.display();
    return 0;
}