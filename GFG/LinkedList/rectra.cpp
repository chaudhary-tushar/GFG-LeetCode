//this code is to travers the linkedlist in 3 ways Loop,Recursion,Inbuilt function

#include<iostream>
#include"../ds.h"
using namespace std;

void nortra(Node<int>* ll){
    Node<int>* curr=ll;
    if(curr==NULL){
        cout<<"List is empty";
        return;
    }
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"None";
    return;
}
void rectra(Node<int>* ll){
    if (ll==NULL){
        return ;
    }
    Node<int>*curr=ll;
    
    rectra(curr->next);
    cout<<curr->data<<"->";
}


int main(){
    LinkedList<int> tl;
    for(int i=1;i<11;i++){
        tl.insert(i);
    }
    //first way using inbuilt function
    //tl.display();
    //cout<<endl;
    //nortra(tl.head);
    cout<<endl;
    rectra(tl.head);
    cout<<"None";
    return 0;

}