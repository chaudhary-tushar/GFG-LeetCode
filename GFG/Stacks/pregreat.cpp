#include<iostream>
#include"../ds.h"
using namespace std;

void pregrt(vector<int> arr){
    int n=arr.size();
    Stack<int> s;
    s.push(arr[0]);
    cout<<"-1 ";
    int i=1;
    while(i<n){
        while(s.isEmpty()==false && arr[i]>s.peek()){
            s.pop();
        }
        (s.isEmpty()) ? cout<<"-1 " : cout<<s.peek()<<" ";
        s.push(arr[i]);
        i++;
    }
}
int main(){
        vector<int> arr {15,10,18,12,4,6,2,8};
        pregrt(arr);
        return 0;
    }