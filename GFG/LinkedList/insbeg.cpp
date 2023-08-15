#include<iostream>
#include"../ds.h"
using namespace std;

void insertbeg(LinkedList<int> &ll,int x){
    Node<int>* temp=new Node(x);
    if(ll.head==NULL){
        ll.head=temp;
        return;
    }
    temp->next=ll.head;
    ll.head=temp;
    return;
}

int main(){
    LinkedList<int> tl;
    tl.insert(5);
    tl.insert(10);
    tl.insert(15);
    tl.insert(20);
    insertbeg(tl,100);
    tl.display();
    return 0;

}