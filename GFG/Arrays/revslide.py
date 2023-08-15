def givsum(arr,gsum):
    n=len(arr)
    fsum=arr[0]
    i=1
    j=0
    while(i<n and j<i):
        if(fsum<gsum):
            fsum+=arr[i]
            i+=1
        elif(fsum>gsum):
            fsum-=arr[j]
            j+=1
        else:
            return "YES"
    return "NO"

brr=[1,4,20,3,10,5]
qsum=38
print(givsum(brr,qsum))