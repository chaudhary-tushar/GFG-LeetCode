def ropecut(n,a,b,c):
    if n==0:
        return 0
    if n<0:
        return -1
    res=max(ropecut(n-a,a,b,c),max(ropecut(n-b,a,b,c),ropecut(n-c,a,b,c)))
    if res==-1:
        return -1
    return res+1

n,a,b,c=map(int,input().split())
print(ropecut(n,a,b,c))