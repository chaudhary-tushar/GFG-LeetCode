def first(arr,l,h):
    if(l>h):
        return -1
    m=(l+h)//2
    if(arr[m]==1 and (arr[m-1]!=1)):
        return m
    elif(arr[m]>=1):
        return first(arr,l,m-1)
    elif(arr[m]<1):
        return first(arr,m+1,h)


def cntone(arr):
    n=len(arr)
    f=first(arr,0,n)
    print(f)
    return n-f



brr=[0,0,0,0,1,1,1,1,1,1]
print(cntone(brr))
