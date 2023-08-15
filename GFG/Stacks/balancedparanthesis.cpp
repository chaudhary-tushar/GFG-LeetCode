#include<iostream>
#include"../ds.h"
using namespace std;

bool findbal(string par){
    int n= par.length();
    int i=0;
    Stack<char> st;
    while(i<n){
        if(par[i]=='['){
            st.push('[');
        }
        else{
            if(par[i]==']' && st.isEmpty()==false){
                st.pop();
            }
            else{
                return false;
            }
        }
        i++;
    }
    if(st.isEmpty()==true){
        return true;
    }
    return false;
}
int main(){
    string q="[[[[[[[[]]]]]]]]";
    cout<<findbal(q)<<endl;
    return 0;

}