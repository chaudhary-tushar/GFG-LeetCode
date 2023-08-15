//  to check if a number is a power of two
#include<iostream>
#include<vector>
using namespace std;

int powtwo(int n){
    int count=0;
    while(n){
        count=count+(1 & n);
        n= n>>1;
    }
    if (count==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main (){
    int x ;
    cin>>x;
    if (powtwo(x)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

