def sort3(arr):
    n=len(arr)
    i=0
    j=n-1
    k=0
    while(k<=j):
        if(arr[k]<1):
            arr[i],arr[k]=arr[k],arr[i]
            k+=1
            i+=1
        elif(arr[k]>1):
            arr[k],arr[j]=arr[j],arr[k]
            k+=1
            j-=1
        if(arr[k]==1):
            k+=1
        else:k-=1
    return

arr=[0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,0,1,2]
sort3(arr)
print(arr)
        