#include<iostream>
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

string infixtopostfix(string expr){
    int n=expr.size();
    Stack<char> st;
    int i=0;
    string res="";
    while(i<n){
        if(isOperator(expr[i])){
            if(st.isEmpty()==false && getPrecedence(st.peek())>=getPrecedence(expr[i])){
                char t=st.pop();
                st.push(expr[i]);
                res+=t;
            }
            else{
            st.push(expr[i]);
            }
        }
        else if(isalnum(expr[i])){
            res+=expr[i];
        }
        else if(expr[i]=='('){st.push(expr[i]);}
        else if(expr[i]==')'){
            while(st.isEmpty()==false && st.peek()!='('){
                res+=st.peek();
                st.pop();
            }
            st.pop();
        }
        i++;
    }
    while(st.isEmpty()==false){
        if(st.peek()!=')'){
            res+=st.peek();
        }
        st.pop();
    }
    return res;
}    

int main(){
    string eval=" (A + B) * C - D / E";
    cout<<infixtopostfix(eval);
    return 0;
}
