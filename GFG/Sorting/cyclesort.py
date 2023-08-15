def cycle(arr):
    n=len(arr)
    i=0
    while (i<n):
        cnt = sum(1 for j in range(len(arr)) if (arr[j]<arr[i]))
        arr[i],arr[cnt]=arr[cnt],arr[i]
        if(i!=cnt):
            continue
        else:
            i+=1
            
arr=[10,90,20,80,30,70,40,60,50]
cycle(arr)
print(arr)
            