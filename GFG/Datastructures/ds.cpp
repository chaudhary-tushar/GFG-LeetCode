#include<iostream>
#include<algorithm>
using namespace std;
template <typename T>

class Node{
public:
    T data;
    Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};
template <typename T>
class linkedlist{
private: 
    Node<T>* head;
public:
    linkedlist() {head=NULL;}

    void insert(T data){
        Node* newNode = new Node(data);
        if (head==NULL){
            head = newNode;
        }
        Node* curr =head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=newNode;
    }

    void display(){
        if (head==NULL){
            return ;
        }
        Node* curr=head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }

    void delete(int ){
        if (head==NULL){
            return;
        }

    }

};