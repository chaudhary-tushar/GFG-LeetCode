#include<iostream>
#include"../ds.h"
using namespace std;

void cinsert(LinkedList<int> &dl,int x){
    Node<int>* temp=new Node(x);
    if(dl.head==NULL){
        dl.head=temp;
        dl.head->next=dl.head;
        return;
    }
    dl.tail->next=temp;
    temp->next=dl.head;
    dl.tail=temp;
    return;
}
int main(){
    LinkedList<int> dll;
    dll.insert(5);
    dll.insert(10);
    dll.insert(15);
    dll.insert(20);
    dll.tail->next=dll.head;
    cinsert(dll,500);
    dll.display();
    return 0;
}