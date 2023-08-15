#include<iostream>
#include"../ds.h"
using namespace std;

void brloop(LinkedList<int> &dl){
    Node<int>* fcurr=dl.head->next->next,*scurr=dl.head->next;
    while(fcurr!=scurr){
        fcurr=fcurr->next->next;
        scurr=scurr->next;
    }
    scurr=dl.head;
    while(true){
        if(fcurr->next==scurr->next){
            break;
        }
        fcurr=fcurr->next;
        scurr=scurr->next;
    }
    fcurr->next=nullptr;

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
    Node<int>* curr=dll.head;
    while(curr!=NULL && i<20){
        cout<<curr->data<<"->*";
        curr=curr->next;
        i++;
    }
    brloop(dll);
    cout<<"**********"<<endl;
    dll.display();
    cout<<"**********"<<endl;
    return 0;
}