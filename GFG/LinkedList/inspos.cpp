#include<iostream>
#include"../ds.h"
using namespace std;

void inspos(LinkedList<int> &ll,int x,int k){
    if(ll.head==NULL || ll.size()<k){
        return;
    }
    Node<int>* temp=new Node(x);
    int i=0;
    Node<int>* curr=ll.head;
    while(curr->next!=NULL && i<k-1){
        curr=curr->next;
        i++;
    }
    temp->next=curr->next;
    curr->next=temp;
}
int main(){
    LinkedList<int> tl;
    tl.insert(5);
    tl.insert(10);
    tl.insert(15);
    tl.insert(20);
    inspos(tl,100,2);
    tl.display();
    return 0;
}