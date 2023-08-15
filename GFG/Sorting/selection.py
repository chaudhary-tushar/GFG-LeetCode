def slsort(arr):
    n=len(arr)
    for i in range(n):
        min_ind=i
        for j in range(i+1,n):
            if(arr[min_ind]>arr[j]):
                min_ind=j
        arr[i],arr[min_ind]=arr[min_ind],arr[i]
    return    


arr=[100,5,10,10,13,8,9,14,34,7,7,19,99,1]
slsort(arr)
print(arr)