def bound(arr):
    n=len(arr)
    m=len(arr[0])
    i=0
    j=0
    for j in range(m):
        print(arr[i][j],end=" ")
    for i in range(1,n):
        print(arr[i][j],end=" ")
    for j in range(m-2,-1,-1):
        print(arr[i][j],end=" ")
    for i in range(n-2,0,-1):
        print(arr[i][j],end=" ")
    return 

arr=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
bound(arr)
    