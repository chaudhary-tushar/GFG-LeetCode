def twoodd(arr):
    xoq,res,res2=0,0,0
    for i in range(len(arr)):
        xoq = xoq^arr[i]
    sn = xoq &~(xoq-1)
    for i in range(len(arr)):
        if (sn & arr[i])!=0:
            res=res^arr[i]
            
        else:
            res2 = res2^arr[i]
    return res, res2

brr = [1,2,3,9,1,2,3,11]
print(twoodd(brr))
   