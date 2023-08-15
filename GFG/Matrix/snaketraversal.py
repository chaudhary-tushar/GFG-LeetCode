def snake(arr):
    n=len(arr)
    m=len(arr[0])
    for i in range(n):
        if i%2==0:
            for j in range(m):
                print(arr[i][j],end=" ")
        elif(i%2==1):
            for j in range(m-1,-1,-1):
                print(arr[i][j],end=" ")
    return

arr=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]

snake(arr)