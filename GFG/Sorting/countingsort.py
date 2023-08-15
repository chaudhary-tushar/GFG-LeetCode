def countingsort(arr):
    n=len(arr)
    k=max(arr)
    brr=[0]*(k+1)
    for i in range(n):
        brr[arr[i]]+=1
    l=0
    for i in range(len(brr)):
        if(brr[i]>0):
            while(brr[i]>0):
                arr[l]=i
                l+=1
                brr[i]-=1
            
arr=[9,8,1,9,8,2,9,8,3,9,8,4,9,8,6,9,8,5,9,8,7]
countingsort(arr)
print(arr)