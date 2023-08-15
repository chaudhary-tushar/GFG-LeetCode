#include<iostream>
#include"../ds.h"
using namespace std;

void remdupli(LinkedList<int> &dl){
    if(dl.head==NULL){
        return;
    }
    Node<int>* curr=dl.head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node<int>* temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
}
int main(){
    LinkedList<int> dll;
    for (int i=1;i<11;i++){
        dll.insert(i*10);
        dll.insert(i*10);
    }
    dll.display();
    remdupli(dll);
    dll.display();
    return 0;
}