#include<iostream>
#include"../ds.h"
using namespace std;

void span(vector<int> arr){
    Stack<int> st1,st2;
    int n=arr.size();
    int i=1;
    st1.push(arr[0]);
    cout<<"1 ";
    while(i<n){
        int q=1;
        if(arr[i]<=st1.peek()){
            st1.push(arr[i]);
            cout<<q<<" ";
            i++;
        }
        else{
            if(arr[i]>st1.peek()){
                while(st1.size()>0 && st1.peek()<=arr[i]   ){
                    st2.push(st1.pop());
                    q++;
                }
                
                while(st2.size()>0){
                    st1.push(st2.pop());
                }
                st1.push(arr[i]);
                cout<<q<<" ";
            }
            i++;
        }
    }
    return ;
}

int main(){
    // vector<int> arr {13,15,12,14,16,8,6,4,10,30};
    vector<int> arr {10,20,30,40};
    span(arr);
    return 0;
}