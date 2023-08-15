def subar(arr):
    n=len(arr)
    res=0
    maxq=1
    i=0
    j=0
    while i<n-1:
        if(arr[i]%2==0 and arr[i+1]%2==1) or (arr[i]%2==1 and arr[i+1]%2==0):
            maxq+=1
            res=max(res,maxq)
            i+=1
        else:
            maxq=1
            i+=1
        
    return res

brr=[1,2,3,4,5,6,7,8,9,10]
print(subar(brr))        