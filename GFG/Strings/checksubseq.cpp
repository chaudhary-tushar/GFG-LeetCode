#include<iostream>
#include<string>
using namespace std;

bool subseq(string s1,string s2){
    int n1=s1.size();
    int n2=s2.size();
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(s1[i]==s2[j]){
            i++;j++;
        }
        i++;
    }
    if(j!=n2){
        return false;
    }
    else{return true;}
}

int main(){
    string q1="ABCDEFG";
    string q2="AGD";
    cout<<subseq(q1,q2);
    return 0;
}