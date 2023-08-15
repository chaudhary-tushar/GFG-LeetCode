#include<iostream>
#include<string>
#include"../ds.h"
using namespace std;

void printN(int n){
    Queue<string> q;
    q.enque("5");
    q.enque("6");
    int i =0;
    while(i<n){
        string curr=q.deque();
        cout<<curr<<" ";
        q.enque(curr+"5");
        q.enque(curr+"6");
        i++;
    }
    return;
}
int main(){
    int q=50;
    printN(q);
    return 0;
}