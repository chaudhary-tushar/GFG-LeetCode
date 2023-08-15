#include<iostream>
#include"../ds.h"
using namespace std;
//for integer class datatype
class mQue{
    public:
    mQue() : sz(0) {}
    LinkedList<int> ll;
    int sz;
    void enqu(int value){
        ll.insert(value);
        sz++;
        return;
    }
    int dequ(){
        Node<int>* res=ll.head;
        int ret=res->data;
        ll.head=ll.head->next;
        delete res;
        sz--;
        return ret;
    }
    bool isEmp(){
        return sz==0;
    }
    int size(){
        return sz;
    }
    int front(){
        return ll.head->data;
    }
    int rear(){
        return ll.tail->data;
    }
};
int main(){
    mQue q;
    for(int i=1;i<11;i++){
        q.enqu(i*10);
    }
    cout<<q.size()<<" "<<q.isEmp()<<endl;
    while(q.isEmp()==false){
        cout<<q.rear()<<" "<<q.front()<<endl;
        cout<<q.dequ()<<endl;
    }
    return 0;
}
