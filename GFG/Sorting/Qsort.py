def lpart(arr,l,h):
    pivot=arr[h]
    i=l-1
    for j in range(l,h):
        if(arr[j]<pivot):
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[h]=arr[h],arr[i+1]
    return (i+1)

def hpart(arr,l,h):
    pivot = arr[l]  # Choose the first element as the pivot
    i = l - 1
    j = h + 1
    
    while True:
        while True:
            i += 1
            if arr[i] >= pivot:
                break
        while True:
            j -= 1
            if arr[j] <= pivot:
                break
        if i >= j:
            return j
        arr[i], arr[j] = arr[j], arr[i]
        

def lqsort(arr,l,h):
    if(l<h):
        p=lpart(arr,l,h)
        print(p)
        lqsort(arr,l,p-1)
        lqsort(arr,p+1,h)
        
        
def hqsort(arr,l,h):
    if(l<h):
        p=hpart(arr,l,h)
        hqsort(arr,l,p)
        hqsort(arr,p+1,h)
        
brr=[5,10,10,13,8,9,14,34,7,7,19,99]
print(brr)
# lqsort(brr,0,len(brr)-1)
hqsort(brr,0,len(brr)-1)
print(brr)
    