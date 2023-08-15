import ds

def presm(arr):
    n=len(arr)
    q=[]
    s=ds.Stack()
    s.push(0)
    q.append(-1)
    i=1
    while(i<n):
        while(s.isEmpty()==False and arr[i]<arr[s.top()]):
            s.pop()
        q.append(-1) if(s.isEmpty()) else (q.append(s.top()))
        s.push(i)
        i+=1
    return q
        
def nxtsm(arr):
    n=len(arr)
    i=n-2
    q=[]
    s=ds.Stack()
    s.push(n-1)
    q.append(n)
    while(i>=0):
        while(s.isEmpty()==False and arr[s.top()]>arr[i]):
            s.pop()
        q.append(n) if(s.isEmpty()) else (q.append(s.top()))
        s.push(i)
        i-=1
    q.reverse()
    return q
        
def area(arr):
    ps=presm(arr)
    ns=nxtsm(arr)
    print(ps)
    print(ns)
    n=len(arr)
    res=0
    for i in range(n):
        curr=arr[i]
        curr+=(i-ps[i]-1)*arr[i]
        curr+=(ns[i]-i-1)*arr[i]
        res=max(res,curr)
    return res

arr=[6,2,5,4,1,5,6]
print(area(arr))