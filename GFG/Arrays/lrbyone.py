def leftrotate(arr):
    n=len(arr)
    temp=arr[0]
    for i in range(len(arr)-1):
        arr[i]=arr[i+1]
    arr[n-1]=temp
    return arr

brr=[1,2,3,4,5,6,7,8,9]
print(leftrotate(brr))