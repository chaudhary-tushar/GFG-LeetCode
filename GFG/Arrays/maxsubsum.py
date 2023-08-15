def maxsubsum(arr):
    maxq=0
    i,j=0,1
    n=len(arr)
    res=0
    print(arr[0:n])
    while (i<n and j<n):
        maxq=sum(arr[i:j+1])
        print(maxq)
        if(j==n-1 and i<j):
            i+=1
        elif(maxq>res):
            res=maxq
            j+=1
        elif(maxq<res):
            i+=1
            j+=1
        res=max(res,maxq)
    return res    
# brr=[2,3,-8,7,-1,2,3]
brr=[-2, 1, -3, 4, -1, 2, 1, -5, 4]
print(maxsubsum(brr))
    