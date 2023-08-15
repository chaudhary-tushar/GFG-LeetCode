def seclarg(arr):
    lar=-(2**31)-1
    seclar=0
    for i in range(len(arr)):
        if lar<arr[i]:
            seclar=lar
            lar=arr[i]
    return seclar

brr=[1,2,3,4,5,6,7,8,9,258,963,987,664,789]
print(seclarg(brr))
            