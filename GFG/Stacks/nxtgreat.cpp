#include<iostream>
#include"../ds.h"
using namespace std;

void nxtgrt(vector<int> arr){
    int n=arr.size();
    int i=n-2;
    Stack<int> s;
    s.push(arr[n-1]);
    cout<<"-1"<<" ";
    while(i>=0){
        while(s.isEmpty()==false && s.peek()<arr[i]){
            s.pop();
        }
        (s.isEmpty()) ? cout<<"-1"<<" " : cout<<s.peek()<<" ";
        s.push(arr[i]);
        i--;
    }
}

int main(){
    vector<int> arr {15,10,18,12,4,6,2,8};
    nxtgrt(arr);
    return 0;
}