#include<iostream>
using namespace std;

int jos(int n,int k){
    if (n==0){
        return 0;
    }
    return ((jos(n-1,k)+k)%n);
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<jos(x,y);
    return 0;
}