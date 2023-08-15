def bbsort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(1,n):
            if(arr[j]<arr[j-1]):
                arr[j],arr[j-1]=arr[j-1],arr[j]
    return

arr=[5,10,10,13,8,9,14,34,7,7,19,99]
bbsort(arr)
print(arr)