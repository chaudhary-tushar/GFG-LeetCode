def psort(tup1,tup2):
    return tup1[1]<tup2[1]

def activity(arr):
    arr=sorted(arr,key=lambda x:x[1])
    prev=0
    res=1
    for i in range(len(arr)):
        if(arr[i][0]>=arr[prev][1]):
            res+=1
            prev=i
    return res
    
    
arr=[(12,19),(10,20),(20,30),(7,11)]
print(activity(arr))
    