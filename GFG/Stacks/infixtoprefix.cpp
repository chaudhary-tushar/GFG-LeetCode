#include<iostream>
#include<string>
#include"../ds.h"
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to get the precedence of an operator
int getPrecedence(char c) {
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

string infixtoprefix(string expr){
    int n=expr.size();
    Stack<char> st;
    int i=n-1;
    string res="";
    while(i>=0){
        if(isOperator(expr[i])){
            if(st.isEmpty()==false && getPrecedence(st.peek())>=getPrecedence(expr[i])){
                char t=st.pop();
                st.push(expr[i]);
                res=t+res;
            }
            else{
            st.push(expr[i]);
            }
        }
        else if(isalnum(expr[i])){
            res=expr[i]+res;
        }
        else if(expr[i]==')'){st.push(expr[i]);}
        else if(expr[i]=='('){
            while(st.isEmpty()==false && st.peek()!=')'){
                res=st.peek()+res;
                st.pop();
            }
            st.pop();
        }
        i--;
    }
    while(st.isEmpty()==false){
        if(st.peek()!=')'){
            res=st.peek()+res;
        }
        st.pop();
    }
    return res;
}

int main(){
    string eval="A * B + C * (D + E) - F / (G + H)";
    string res=infixtoprefix(eval);
    cout<<res<<endl;
    return 0;
}