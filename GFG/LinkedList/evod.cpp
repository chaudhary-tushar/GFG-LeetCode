#include<iostream>
#include"../ds.h"
using namespace std;

void segregate(LinkedList<int> &dl,LinkedList<int> &ev){
    LinkedList<int> od;
    Node<int>* curr=dl.head;
    while(curr!=NULL){
        if((curr->data)%2==0){
            ev.insert(curr->data);
        }
        else{
            od.insert(curr->data);
        }
        curr=curr->next;
    }
    ev.tail->next=od.head;
    ev.tail=od.tail;
    ev.display();
    return ;
}

int main(){
    LinkedList<int> dll;
    LinkedList<int> ev;
    for (int i=11;i<26;i++){
        dll.insert(i);
    }
    cout<<dll.tail->data;
    dll.display();
    cout<<"*********"<<endl;
    cout<<dll.tail->data;
    cout<<"*********"<<endl;
    segregate(dll,ev);
    cout<<"*********"<<endl;
    dll.display();
    return 0;
}