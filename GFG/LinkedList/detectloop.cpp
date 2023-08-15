#include<iostream>
#include"../ds.h"
using namespace std;

Node<int>* loopnode(LinkedList<int> &dl){
    Node<int>* fcurr=dl.head->next->next,*scurr=dl.head->next;
    while(fcurr!=scurr){
        scurr=scurr->next;
        fcurr=fcurr->next->next;
    }
    scurr=dl.head;
    while(true){
        if(fcurr==scurr){
            return fcurr;
        }
        fcurr=fcurr->next;
        scurr=scurr->next;
    }
}

int main(){
    LinkedList<int> dll;
    for(int i=1;i<6;i++){
        dll.insert(i*5);
    }
    Node<int>* temp=new Node(500);
    dll.tail->next=temp;
    dll.tail=dll.tail->next;

    for(int i=6;i<11;i++){
        dll.insert(i*10);
    }
    dll.tail->next=temp;
    dll.tail=dll.tail->next;
    cout<<endl;
    int i=0;
    Node<int>*res=loopnode(dll);
    cout<<"found loopnode  -  ";
    cout<<res->data<<" "<<res->next->data<<endl;
    cout<<"**********"<<endl;
    return 0;
}