#include<iostream>
#include"../ds.h"
using namespace std;

int lmid(LinkedList<int> &dl){
    if(dl.head==NULL){
        return 0;
    }
    Node<int>* fcurr=dl.head;
    Node<int>* scurr=dl.head;
    while(fcurr!=NULL && fcurr->next!=NULL){
        fcurr=fcurr->next->next;
        scurr=scurr->next;
    }
    return scurr->data;
}

int main(){
    LinkedList<int> dll;
    for(int i=1;i<10;i++){
        dll.insert(i*10);
    }
    dll.display();
    cout<<lmid(dll);
    return 0 ;
}