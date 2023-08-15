def infsh(arr,k):
    if(arr[0]==k):
        return 0
    i=1
    prei=0
    while arr[i]<=k:
        if arr[i]==k:
            return i
        prei=i
        i*=2
    if arr[i]==k:
        return i
    prei+=1
    while(prei<i):
        if(prei>i):
            return -1
        mid=(prei+i)//2
        if arr[mid]==k:
            return mid
        elif(arr[mid]>k):
            i=mid-1
        else:
            prei=mid+1

brr=[1,2,3,4,5,6,7,8,9,10,20,30,40,50,55,60,70,80,90,150,200,250,300,350,400,450,500,600,700]
print(infsh(brr,55))
    