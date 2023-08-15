def firstpump(arr,brr):
    n=len(arr)
    start=0
    curr=0
    prev=0
    for i in range(n):
        curr+=(arr[i]-brr[i])
        if(curr<0):
            start=i+1
            prev=curr
            curr=0
    return (start+1) if ((curr+prev)>=0) else -1

q=[50,10,60,100]
w=[30,20,100,10]
print(firstpump(q,w))