#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool ana(string s1, string s2){
    int n1=s1.size();
    int n2=s2.size();
    unordered_map<char,int> m;
    for(int i=0;i<n1;i++){
        if(m.find(s1[i])==m.end()){
            m[s1[i]]=1;
        }
        else{
            m[s1[i]]++;
        }
    }
    for(int j=0;j<n2;j++){
        if(m.find(s2[j])==m.end()){
            return false;
        }
        else{
            m[s2[j]]--;
        }
    }
    int cnt=0;
    for(auto i:m){
        cnt+=i.second;
    }
    if(cnt!=0){
        return false;
    }
    return true;
}

int main(){
    string q1="listen";
    string q2="silent";
    cout<<ana(q1,q2);
    return 0;
}