#include<iostream>
using namespace std;

bool isPrime(int q){
    if(q%2==0 or q%3==0){
        return false;
    }
    for(int i=5;i*i<=q;i++){
        if (q%i==0){
            return false;
        }
        i++;
    }
    return true;
}

int main (){
    cout<<"Enter number to check: "<<endl;
    int x;
    cin>>x;
    cout<<isPrime(x);
    return 0;
}