#include<iostream>
#include<string>
using namespace std;

void gensubset(string s,string curr="",int i=0){
    if (i==s.length()){
        cout<<curr<<" ";
        return ;
    }
    gensubset(s,curr,i+1);
    gensubset(s,curr+s[i],i+1);
}

int main (){
    string x;
    cin>>x;
    gensubset(x);
    return 0;
}