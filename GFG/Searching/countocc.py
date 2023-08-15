def first(arr,l,h,k):
    if(l>h):
        return -1
    m=(l+h)//2
    if (arr[m]==k and (arr[m-1]!=k)):
        return m
    elif arr[m] == k:
        return first(arr,l,m-1,k)
    elif(arr[m]>k):
        return first(arr,l,m-1,k)
    elif(arr[m]<k):
        return first(arr,m+1,h,k)


def last(arr,l,h,k):
    if(l>h):
        return -1
    m=(l+h)//2
    if (arr[m]==k and (arr[m+1]!=k)):
        return m
    elif arr[m] == k:
        return last(arr,m+1,h,k)
    elif(arr[m]>k):
        return last(arr,l,m-1,k)
    elif(arr[m]<k):
        return last(arr,m+1,h,k)
    
def count(arr,k):
    n=len(arr)
    l=last(arr,0,n,k)
    f=first(arr,0,n,k)
    print(l,f)
    return l-f+1

arr=[1,10,10,10,20,20,20,20,20,30,30]
k=20
print(count(arr,k))