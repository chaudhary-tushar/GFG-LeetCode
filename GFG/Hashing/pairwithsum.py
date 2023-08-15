def fpair(arr,k):
    s1=set(arr)
    for i in s1:
        # if(s1.find(k-i)!=s1.end() and s1.find(k-i)!=i):
        if (k-i in s1 and (k-i)!=i):
            return True
    else:
        return False
    
brr=[3,2,8,15,-8]
print(fpair(brr,17))
    