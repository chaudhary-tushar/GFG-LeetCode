#include<iostream>
using namespace std;

int powrec(int n,int p){
    if(p==1){
        return n;
    }
    return n*powrec(n,p-1);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<powrec(x,y);
    return 0;
}