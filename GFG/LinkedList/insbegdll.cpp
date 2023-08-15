#include<iostream>
#include"../ds.h"
using namespace std;

void insbeg(DLList<int> &dl,int x){
    DNode<int>* temp= new DNode(x);
    if(dl.head==nullptr){
        dl.head=temp;
        return;
    }
    temp->next=dl.head;
    dl.head->prev=temp;
    dl.head=temp;
    return;
}
int main(){
    DLList<int> dll;
    dll.insert(5);
    dll.insert(10);
    dll.insert(15);
    dll.insert(20);
    insbeg(dll,100);
    dll.display();
    return 0;
}