import ds

def sspan(arr):
    n=len(arr)
    st1=ds.Stack()
    st2=ds.Stack()
    st1.push(arr[0])
    print("1",end=" ")
    i=1
    while(i<n):
        q=1
        if(arr[i]<=st1.top()):
            st1.push(arr[i])
            print(q,end=" ")
            i+=1
        else:
            while(st1.size()>0 and arr[i]>st1.top() ):
                q+=1
                st2.push(st1.pop())
            while(st2.size()>0):
                st1.push(st2.pop())
            st1.push(arr[i])
            print(q,end=" ")
            i+=1
arr=[13,15,12,14,16,8,6,4,10,30]
sspan(arr)

        