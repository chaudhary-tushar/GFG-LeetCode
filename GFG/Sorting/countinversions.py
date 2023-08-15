def merge(arr,l,m,r):
    n1=m-l+1
    n2=r-m
    left=[]
    right=[]
    for i in range(n1):
        left.append(arr[l+i])
    for i in range(n2):
        right.append(arr[m+1+i])
    i=0
    j=0
    k=l
    while(i<n1 and j<n2):
        if(left[i]<right[j]):
            arr[k]=left[i]
            i+=1
            k+=1
        else:
            arr[k]=right[j]
            j+=1
            k+=1
            global count
            count+=(n1-i)
    while(i<n1):
        arr[k]=left[i]
        k+=1
        i+=1
    while (j<n2):
        arr[k]=right[j]
        j+=1
        k+=1

def mergesort(arr,l,r):
    if(r>l):
        m=l+(r-l)//2
        mergesort(arr,l,m)
        mergesort(arr,m+1,r)
        merge(arr,l,m,r)
        
arr=[5,10,10,13,8,9,14,34,7,7,19,99]
count=0
mergesort(arr,0,len(arr)-1)
print(arr)
print(count)