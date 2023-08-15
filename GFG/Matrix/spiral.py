def spiral(arr):
    n=len(arr)
    m=len(arr[0])
    top=0
    left=0
    bottom=n-1
    right=m-1
    while(top<=bottom and left<=right):
        for i in range(left,right+1):
            print(arr[top][i],end=" ")
        top+=1
        for i in range(top,bottom+1):
            print(arr[i][right],end=" ")
        right-=1
        if (top<=bottom):
            for i in range(right,left-1,-1):
                print(arr[bottom][i],end=" ")
        bottom-=1
        if(left<=right):
            for i in range(bottom,top-1,-1):
                print(arr[i][left],end=" ")
        left+=1
    
arr=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
spiral(arr)
    