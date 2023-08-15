#include<iostream>
using namespace std;

int rec_factorial(int n){
    if (n==1){
        return n;
    }
    return n*rec_factorial(n-1);
}

int loop_factorial(int n){
    int fact = 1;
    while (n>0){
        fact=fact*n;
        n--;
    }
    return fact;
}

int main(){
    int x;
    cin>>x;
    cout<<loop_factorial(x);
    return 0;
}