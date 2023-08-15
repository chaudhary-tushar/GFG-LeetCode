def stocks(arr):
    pro=0
    n=len(arr)
    for i in range(1,n):
        if (arr[i]>arr[i-1]):
            pro+= arr[i]-arr[i-1]
    return pro

brr=[1,5,3,8,12]
print(stocks(brr))
            
            