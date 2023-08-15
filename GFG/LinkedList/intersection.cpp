#include<iostream>
#include"../ds.h"
using namespace std;

Node<int>* inter(LinkedList<int> &dl,LinkedList<int> &sl){
    Node<int> *dcurr=dl.head;
    Node<int>* scurr=sl.head;
    int c1=dl.size();
    int c2=sl.size();
    int diff=abs(c1-c2);
    while(diff!=0){
        if(c1>c2){dcurr=dcurr->next;}
        else{scurr=scurr->next;}
        diff--;
    }
    while(dcurr!=scurr){
        dcurr=dcurr->next;
        scurr=scurr->next;
    }
    return dcurr;
}

int main(){
    LinkedList<int> dll;
    LinkedList<int> sll;
    for(int i=1;i<6;i++){
        dll.insert(i*10);
        sll.insert(i*5);
    }
    sll.tail->next=dll.tail;
    int q=1;
    for(int j=11;j<21;j++){
        dll.insert(j*5);
        q++;
    }
    sll.sz+=q;
    cout<<dll.size()<<" ***** "<<sll.size()<<endl;
    dll.display();
    sll.display();
    Node<int>* res=inter(dll,sll);
    cout<<res->data<<endl;
    cout<<dll.size()<<" ***** "<<sll.size();
    return 0;
}