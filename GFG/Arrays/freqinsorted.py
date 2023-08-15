def frequency(arr):
    freq=1
    j=1
    n = len(arr)
    while(j<n):
        while( j<n and arr[j]==arr[j-1]):
            freq+=1
            j+=1
        print(arr[j-1]," ",freq)
        freq=1
        j+=1
    if(n==1 or arr[n-1]!=arr[n-2] ):
        print(arr[n-1],"  1")
arr=[5,10,10,10,20,20,30,30,30,30,40,40,50,60]
frequency(arr)
        