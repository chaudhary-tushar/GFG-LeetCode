def Rsearch(arr,k):
    low=0
    high=len(arr)-1
    while(low<=high):
        mid=(low+high)//2
        if(arr[mid]==k):
            return mid
        if(arr[low]<arr[mid]):
            if(arr[low]<=k and arr[mid]>k):
                high=mid-1
            else:
                low=mid+1
        else:
            if(k>arr[mid] and k<=arr[high]):
                low=mid+1
            else:
                high=mid-1
    return -1

brr=[10,20,30,40,60,5,6,7,8,9]
print(Rsearch(brr,60))
            