#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (a%b==0){
        return b;
    }
    return gcd(b,a%b);
}
int lcm(int a ,int b){
    return ((a*b)/gcd(a,b));
}

int main(){
    int x ;
    int y ;
    cout<<"Enter x and y :"<<endl;
    cin>>x>>y;
    cout<<lcm(x,y);
}