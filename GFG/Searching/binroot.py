def sqrt(n):
    i=1
    h=n
    ans=-1
    while(i<=h):
        mid = (i+h)//2
        msq = mid*mid
        if(msq==n):
            return mid
        elif(msq>n):
            h=mid-1
        else:
            i =mid+1
            ans=mid

    return ans

print(sqrt(101))
        