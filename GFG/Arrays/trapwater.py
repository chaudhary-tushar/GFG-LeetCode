# using precomputation to compute rather than computing for every index

def trap(arr):
    n = len(arr)
    wat=0
    rmaw=[]
    lmaw=[]
    lmaw.append(arr[0])
    rmaw.append(arr[n-1])
    i,j=1,n-2
    while(i<n and j>=0):
        lmaw.append(max(lmaw[i-1],arr[i]))
        rmaw.insert(0,max(rmaw[0],arr[j]))
        i+=1
        j-=1
    for i in range(n):
        wat+=min(lmaw[i],rmaw[i])-arr[i]
    return wat
        

brr =[9,5,4,3,2,10,2,3,4,5,7]

print(trap(brr))