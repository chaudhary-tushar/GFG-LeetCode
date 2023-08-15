import ds

def kclose(arr,k,x):
    q=ds.MinHeap()
    for i in arr:
        temp=abs(x-i)
        q.insert(temp)
    while(k>0):
        print(q.extract_min(),end=" ")
        k-=1
    
    
arr=[5,6,7,8,9,10,20,25,30,35,40,45,50]
kclose(arr,5,15)