#include<iostream>
#include"../ds.h"
using namespace std;

template <typename T>
class MStack{
    public:
    LinkedList<T> st;
    int sz=0;

    void push(T value){
        Node<T>* temp=new Node(value);
        temp->next=st.head;
        st.head=temp;
        sz++;
    }
    T pop(){
        T res=st.head->data;
        Node<T>* temp=st.head;
        st.head=st.head->next;
        delete temp;
        sz--;
        return res;
    }
    T top(){
        return st.head->data;
    }
    bool isEmpty(){
        return sz==0;
    }
    int size(){
        return sz;
    }
};

int main(){
    MStack<int> st;
    for (int i=1;i<11;i++){
        st.push(i*10);
    }
    cout<<st.size()<<" ** "<<st.isEmpty()<<endl;
    while(st.isEmpty()==false){
        cout<<st.pop()<<endl;
    }
    return 0;
}