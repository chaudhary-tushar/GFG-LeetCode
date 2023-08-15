def isort(arr):
    n=len(arr)
    for i in range(1,n):
        j=i-1
        key=arr[i]
        while(j>=0 and key<arr[j]):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key
    return

arr=[100,5,10,10,13,8,9,14,34,7,7,19,99,1]
isort(arr)
print(arr)