import ds

def klar(arr,k):
    q=ds.MaxHeap()
    for i in arr:
        q.insert(i)
    while(k>1):
        q.extract_max()
        k-=1
    print(q.extract_max())
    
arr=[1,2,3,4,5,6,7,8,9,10,20,30,40,50]
klar(arr,2)