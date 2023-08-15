def rot(arr):
    n=len(arr)
    m=len(arr[0])
    brr=[[None] * m for _ in range(n)]
    mrr=[[None] * m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            brr[j][i]=arr[i][j]
    for i in range(n):
        for j in range(m):
            mrr[n-i-1][j]=brr[i][j]
            
    for i in range(n):
        for j in range(m):
            print(mrr[i][j],end=" ")
        print('')


arr=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
rot(arr)
