def zeroend(arr):
    n=len(arr)
    i=0
    j=1
    while(i<n and j<n):
        if (arr[i]==0 and arr[j]==0):
            j+=1
        elif(arr[i]!=0 and arr[j]==0):
            arr[i],arr[j]=arr[j],arr[i]
        elif (arr[i]==0 and arr[j]!=0):
            arr[i],arr[j]=arr[j],arr[i]
            i+=1
            j+=1
        else:j+=1
    return arr

brr=[1,0,0,0,0,0,0,1]
print(zeroend(brr))