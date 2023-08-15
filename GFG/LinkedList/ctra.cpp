#include<iostream>
#include"../ds.h"
using namespace std;

void tra(LinkedList<int> &dl){
    if(dl.head==NULL){
        return;
    }
    Node<int>* curr=dl.head;
    do{
        cout<<curr->data<<endl;
        curr=curr->next;
    }while(curr!=dl.head);
}
int main(){
    LinkedList<int> dll;
    dll.insert(5);
    dll.insert(10);
    dll.insert(15);
    dll.insert(20);
    dll.tail->next=dll.head;
    tra(dll);
    return 0;
}