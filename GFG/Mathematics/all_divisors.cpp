#include<iostream>
using namespace std;

void divisors(int q){
    int i =1;
    while (i*i<=q){
        if (q%i==0){
            cout<<i<<" "<<(q/i)<<endl;
            i++;
        }
        else{
            i++;
        }
    }
}

int main (){
    cout<<"Enter number:";
    int x;
    cin>>x;
    divisors(x);
    return 0;
}