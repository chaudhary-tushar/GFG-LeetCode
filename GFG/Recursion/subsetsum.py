def subsum(arr,gsum,curr=[],i=0):
    if sum(curr)==gsum:
        return 1
    elif (i>=len(arr)):
        return 0
    
    return (subsum(arr,gsum,curr,i+1)+subsum(arr,gsum,curr+arr[i:i+1],i+1))

brr=[10,5,2,3,6]
qsum=0
print(subsum(brr,qsum))