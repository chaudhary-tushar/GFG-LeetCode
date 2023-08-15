def remduplicate(arr):
    i=0
    n=len(arr)
    while i<n-1:
        if arr[i]==arr[i+1]:
            arr.remove(i+1)
            n-=1
        i+=1
    return arr
            
arr=[1,1,2,2,3,3,4,5,6,7,8,9,9]

print(remduplicate(arr))