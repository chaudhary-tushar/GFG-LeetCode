def majority(arr):
    res=0
    count=1
    n=len(arr)
    for i in range(1,n):
        if arr[res]==arr[i]:
            count+=1
        else:
            count-=1
        if count==0:
            res=i
            count=1
    count=0
    for i in range(n):
        if arr[res]==arr[i]:
            count+=1
    if count<n//2:
        return -1
    return res

brr=[8,8,8,8,7,7,8,6,6,8,6]
print(majority(brr))