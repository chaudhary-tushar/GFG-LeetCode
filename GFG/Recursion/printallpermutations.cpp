#include<iostream>
#include<string>
using namespace std;

void perms(string s,int i=0){
    if(i==s.length()-1){
        cout<<s<<endl;
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        perms(s,i+1);
        swap(s[i],s[j]);
    }
}

int main(){
    string q;
    cin>>q;
    perms(q);
    return 0;

}