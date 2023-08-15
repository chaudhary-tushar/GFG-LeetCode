#include<iostream>
#include"../ds.h"
using namespace std;

int nthend(LinkedList<int> &dl,int n){
    if(dl.head==NULL || n>dl.size()){
        return 0;
    }
    Node<int>* curr=dl.head;
    Node<int>* ncurr=dl.head;
    int i=0;
    while(curr!=NULL){
        if(i>=n){
            curr=curr->next;
            ncurr=ncurr->next;
        }
        else{
            curr=curr->next;
        }
        i++;
    }
    return ncurr->data;
}

int main(){
    LinkedList<int> dll;
    for (int i=1;i<11;i++){
        dll.insert(i*10);
    }
    dll.display();
    cout<<nthend(dll,3);
    return 0;
}