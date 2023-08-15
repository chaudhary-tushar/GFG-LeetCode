import ds

def nxtgrt(arr):
    n=len(arr)
    i=n-2
    s=ds.Stack()
    s.push(arr[-1])
    print("-1",end=" ")
    while(i>=0):
        while(s.isEmpty()==False and s.top()<arr[i]):
            s.pop()
        print("-1",end=" ") if(s.isEmpty()) else (print(s.top(),end=" "))
        s.push(arr[i])
        i-=1
arr=[15,10,18,12,4,6,2,8]
nxtgrt(arr)