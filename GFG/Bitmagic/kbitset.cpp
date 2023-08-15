#include<iostream>
using namespace std;

void checkl(int n,int m){
    if (n & (1<<(m-1))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return ;
}

void checkr(int n,int m){
    if (1 & (n>>(m-1))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}

void printBinary(int number) {
    for (int i = sizeof(number) * 8 - 1; i >= 0; --i) {
        cout << ((number >> i) & 1);
    }
    cout << std::endl;
}

int main (){
    int x,k;
    cin>>x>>k;
    printBinary(x);
    checkl(x,k);
    cout<<endl;
    checkr(x,k);
    return 0;
}