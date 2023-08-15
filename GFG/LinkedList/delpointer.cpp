#include<iostream>
#include"../ds.h"
using namespace std;

void delwpointer(Node<int>* curr){
    swap(curr->data,curr->next->data);
    Node<int>* temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return;
}
int main(){
    LinkedList<int> dll;
    for (int i=1;i<11;i++){
        dll.insert(i*10);
    }
    dll.display();
    int x;
    cin>>x;
    Node<int>*turr=dll.head;
    for (int i=0;i<x;i++){
        turr=turr->next;
    }
    cout<<turr->data<<endl;
    delwpointer(turr);
    dll.display();
    return 0;


}