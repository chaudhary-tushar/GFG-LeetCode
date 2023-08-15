def trailzero(n):
    res = 0
    i=5
    while i<=n:
        res=res+n//i
        i=i*5
    return res

print(trailzero(25))