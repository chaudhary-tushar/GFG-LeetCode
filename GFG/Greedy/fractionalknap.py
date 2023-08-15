def weight(arr):
    brr=[]
    for i in range(len(arr)):
        brr.append((arr[i][1]/arr[i][0],i))
    brr=sorted(brr,key=lambda x:x[0],reverse=True)
    print(brr)
    return brr


def knap(arr,k):
    brr=weight(arr)
    res=0
    while(k>0):
        temp=brr[0]
        ind=arr[temp[1]]
        print(ind)
        if(k<ind[0]):
            res+=(ind[1]/ind[0])*k
            break
        k=k-ind[0]
        res=res+ind[1]
        brr.pop(0)
    return res
        
arr=[(50,600),(20,500),(30,400)]
kap=70
print(knap(arr,kap))