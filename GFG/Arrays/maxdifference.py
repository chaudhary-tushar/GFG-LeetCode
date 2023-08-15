# find the maximum differnece arr[j]-arr[i] such that j>i;

def maxdif(arr):
    j=1
    res = arr[1]-arr[0]
    minv=arr[0]
    while j<len(arr):
        res = max(res,(arr[j]-minv))
        minv=min(minv,arr[j])
        j+=1
    return res

brr=[7,9,5,6,3,2]
print(maxdif(brr))
        
        
        