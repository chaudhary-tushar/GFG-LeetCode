def checksort(arr):
    for i in range(len(arr)-1):
        if arr[i]>arr[i+1]:
            return False
    return True

brr=[1,2,3,4,5,5,6,6,6,7,8,9]
print(checksort(brr))
            