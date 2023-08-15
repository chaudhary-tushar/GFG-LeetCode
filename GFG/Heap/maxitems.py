import ds

def maxit(arr,k):
    mih=ds.MinHeap()
    for i in arr:
        mih.insert(i)
    i=0
    while(k>0):
        
        temp=mih.extract_min()
        if(k<temp):
            break
        print(temp,end=" ")
        i+=1
        k=k-temp
    print()
    print(i)
    
arr=[1,12,5,111,200]
suma=100
maxit(arr,suma)
