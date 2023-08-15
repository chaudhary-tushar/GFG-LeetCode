#include<iostream>
using namespace std;

int trailzero(int n){
    int res = 0;
    for (int i=5;i<=n;i=i*5){
        res = res+n/i;   
    }
    return res;
}

int main(){
    int x;
    cin>>x;
    cout<<trailzero(x);
    return 0;
}