def sort2(arr):
    n=len(arr)
    i=0
    j=0
    while(j<n):
        if(arr[j]<=0):
            arr[j],arr[i]=arr[i],arr[j]
            i+=1
            j+=1
        j+=1
    return

arr=[4,-5,6,-7,8,-9,2,-3]
sort2(arr)
print(arr)