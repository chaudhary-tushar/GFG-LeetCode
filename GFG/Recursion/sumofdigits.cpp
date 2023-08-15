#include<iostream>
using namespace std;

int dsum(int n){
    if (n<10){
        return n;
    }
    return (n%10)+dsum(n/10);
}

int main (){
    int x;
    cin>>x;
    cout<<dsum(x);
    return 0;
}