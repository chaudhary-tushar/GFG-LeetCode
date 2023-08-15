def leader(arr):
    n=len(arr)
    j=n-1
    max=-(2**31)+1
    while j>=0:
        if max<arr[j]:
            max=arr[j]
            print(max)
            j-=1
        else:j-=1
    return arr

brr=[7,10,4,3,6,5,2]
leader(brr)