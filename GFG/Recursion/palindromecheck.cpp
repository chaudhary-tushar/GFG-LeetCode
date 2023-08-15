#include<iostream>
#include<string>
using namespace std;

bool check(string asd){
    int n = asd.length();
    if (n==1 or n==1){
        return true;
    }
    if (asd[0]==asd[n-1]){
        return true;
    }
    else{
        return false;
    }
    return check(asd.substr(1, n - 2));
}

int main(){
    string x;
    cin>>x;
    cout<<check(x);
    return 0;
}