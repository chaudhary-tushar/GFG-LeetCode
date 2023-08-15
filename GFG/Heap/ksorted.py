import ds


def ksort(arr,k):
    q=ds.MinHeap()
    for i in range(0,k+1):
        q.insert(arr[i])
    ind=0
    for i in range(k+1,len(arr)):
        
        print(ind)
        arr[ind]=q.heap[0]
        ind+=1
        q.insert(arr[i])
    ind=0
    print(q.heap)
    while(q.is_empty()==False):
        
        print(ind)
        arr[ind]=q.heap[0]
        ind+=1
        print(q.heap)
        q.extract_min()
        
    

arr=[9,8,7,18,19,17]
ksort(arr,2)
print(arr)

