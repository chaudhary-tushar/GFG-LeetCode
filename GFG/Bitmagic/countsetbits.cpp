#include<iostream>
using namespace std;

void printBinary(int number) {
    for (int i = sizeof(number) * 8 - 1; i >= 0; --i) {
        cout << ((number >> i) & 1);
    }
    cout << std::endl;
}

void countbits(int x){
    int count =0;
    while(x){
        count= count+(x & 1);
        x= x>>1;
    }
    cout<<count;

}

int main (){
    int x;
    cin>>x;
    
    printBinary(x);
    countbits(x);
    return 0;

}