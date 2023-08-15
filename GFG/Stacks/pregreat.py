import ds

def pregrt(arr):
    n=len(arr)
    s=ds.Stack()
    s.push(arr[0])
    print("-1",end=" ")
    i=1
    while(i<n):
        while(s.isEmpty()==False and arr[i]>s.top()):
            s.pop()
        print("-1",end=" ") if(s.isEmpty()) else (print(s.top(),end=" "))
        s.push(arr[i])
        i+=1

arr=[15,10,18,12,4,6,2,8]
pregrt(arr)