#include<iostream>
#include"../ds.h"
using namespace std;

void delbeg(LinkedList<int> &ll){
    if(ll.head==NULL || ll.head->next==NULL){
        return;
    }
    Node<int>* temp=ll.head;
    ll.head=ll.head->next;
    delete temp;
}

int main(){
    LinkedList<int> tl;
    tl.insert(5);
    tl.insert(10);
    tl.insert(15);
    tl.insert(20);
    delbeg(tl);
    tl.display();
    return 0;
}