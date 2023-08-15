import ds

def is_operator(c):
    return c in ['+', '-', '*', '/']

def get_precedence(c):
    if c in ['*', '/']:
        return 2
    elif c in ['+', '-']:
        return 1
    else:
        return 0
    
def infixtoprefix(expr):
    n=len(expr)
    st=ds.Stack()
    res=""
    i=n-1
    while(i>=0):
        if(is_operator(expr[i])):
            if(st.isEmpty()==False and get_precedence(st.top())>get_precedence(expr[i])):
                tp=st.pop()
                st.push(expr[i])
                res=tp+res
            else:
                st.push(expr[i])
        elif(expr[i].isalnum()):
            res=expr[i]+res
        elif(expr[i]==')'):
            st.push(expr[i])
        elif(expr[i]=='('):
            while(st.isEmpty()==False and st.top()!=')'):
                res=st.top()+res
                st.pop()
            st.pop()
        i-=1
    while(st.isEmpty()==False):
        if(st.top() not in ['(',')']):
            res=st.top()+res
        st.pop()
        
    return res

eval="A * B + C * (D + E) - F / (G + H)"
res=infixtoprefix(eval)
print(res)