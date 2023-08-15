#include<iostream>
#include<string>
using namespace std;

bool check(string l){
    int n =l.size();
    int i=0,j=n-1;
    while(i<j){
        if(l[i]!=l[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string g="malayalam";
    cout<<check(g)<<endl;;
    bool f=false;
    cout<<f;
    return 0;
}