#include<iostream>
#include"../ds.h"
using namespace std;

Node<int>* recrev(Node<int>* curr,Node<int>* prev){
    if(curr==NULL ){
        return prev;
    }
    Node<int>* next=curr->next;
    curr->next=prev;
    return recrev(next,curr);
}

int main(){
    LinkedList<int> dll;
    for(int i=1;i<11;i++){
        dll.insert(i*10);
    }
    dll.display();
    Node<int>*newh=recrev(dll.head,NULL);
    Node<int>* curr=newh;
    while(curr!=NULL ){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    return 0;

}