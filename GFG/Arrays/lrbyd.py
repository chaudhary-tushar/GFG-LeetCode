def lrbyD(arr,d):
    n=len(arr)
    brr=arr[:d]
    for i in range(n-d):
        arr[i]=arr[i+d]
    for i in range(d):
        arr[n-d+i]=brr[i]
    return arr

brr=[1,2,3,4,5,6,7,8,9]
d=int(input())
print(lrbyD(brr,d))