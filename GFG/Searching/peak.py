def peak(arr):
    n=len(arr)
    if(arr[0]>arr[1]):
        print(arr)
    if(arr[n-1]>arr[n-2]):
        print(arr[n-1])
    i=1
    while(i<n-1):
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1]):
            print(arr[i])
            i+=2
        else:
            i+=1
    return

brr=[10,20,15,5,23,90,67]
peak(brr)
