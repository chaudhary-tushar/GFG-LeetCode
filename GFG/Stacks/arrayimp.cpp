#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class Stack{
    public:
    vector<T> arr;
    int sz=0;
    void push(T value){
        arr.push_back(value);
        sz++;
    }
    T pop(){
        T res=arr[sz-1];
        sz--;
        arr.pop_back();
        return res;
    }
    T top(){
        return arr.back();
    }
    bool isEmpty(){
        return sz==0;
    }
    int size(){
        return sz;
    }
};

int main(){
    Stack<string> q;
    q.push("qaz");
    q.push("wsx");
    q.push("edc");
    q.push("rfv");
    cout<<q.size()<<endl;
    cout<<q.top()<<endl;
    cout<<q.isEmpty()<<endl;
    while(q.isEmpty()!=1){
        cout<<q.pop()<<"||"<<endl;
    }
    return 0;
}