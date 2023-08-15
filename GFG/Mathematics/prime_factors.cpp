#include<iostream>
using namespace std;

bool isPrime(int q){
    if((q%2==0 && q!=2) or (q%3==0 && q!=3)){
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

void primefactors(int q){
    int i =2;
    cout<<"1 ";
    int qq=q;
    while (i<=qq){
        if (isPrime(i)){
            if (q%i==0){
                cout<<i<<" ";
                q=q/i;  
            }
            else{
                i++;
            }
        }
        else{
            i++;
        }
    }
}
int main(){
    int x;
    cin>>x;
    primefactors(x);
    return 0;

}