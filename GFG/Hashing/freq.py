def freq(arr):
    n = len(arr)
    lict={}
    for i in range(n):
        if arr[i] in lict:
            lict[arr[i]] += 1
        else:
            lict[arr[i]] = 1
    for key,value in lict.items():
        print(key," ",value)
        
arr=[1,2,3,4,5,4,3,2,1,6,6,8,8,7,9]
freq(arr)
        