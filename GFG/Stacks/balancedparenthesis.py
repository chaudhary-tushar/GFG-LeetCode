import ds

def findbal(w):
    n=len(w)
    i=0
    st=ds.Stack()
    while(i<n):
        if(w[i]=='['):
            st.push("[")
        else:
            if(st.isEmpty()==False):
                st.pop()
            else:
                return False
        i+=1
    if(st.isEmpty()==True):
        return True
    else:
        return False
    
par="[[[[[[[]]]]]]]"
print(findbal(par))
    