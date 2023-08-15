def maxone(arr):
    n=len(arr)
    i,j=0,0
    maxq=0
    while (i<n and j<n):
        if(arr[i]==0):
            i+=1
            j+=1
        elif(arr[j]==1):
            j+=1
        elif (arr[j]==0):
            maxq=max(maxq,j-i)
            i=j
    return maxq

brr=[1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1]    
# brr=[0,0,0,0,0,0,0,0,0,0,0]
print(maxone(brr))