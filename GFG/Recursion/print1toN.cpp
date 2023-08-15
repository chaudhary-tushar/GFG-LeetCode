#include<iostream>
using namespace std;

void onetoN(int n){
    if (n==0){
        return;
    }
    onetoN(n-1);
    cout<<n<<" ";
}
int main(){
    int x ;
    cin>>x;
    onetoN(x);
    return 0;
}