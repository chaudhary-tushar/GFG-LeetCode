def first(arr,l,h,k):
    if(l>h):
        return -1
    m=(l+h)//2
    if(arr[m]==k and (arr[m-1]!=k)):
        return m
    elif(arr[m]>k):
        return first(arr,l,m-1,k)
    elif(arr[m]<k):
        return first(arr,m+1,h,k)

brr=[10,20,30]
k=15
print(first(brr,0,len(brr),k))