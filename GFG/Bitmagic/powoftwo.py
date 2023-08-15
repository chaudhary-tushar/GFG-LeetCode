def powtwo(x):
    count=0
    while x:
        count = count +(1 & (x))
        x = x>>1
    return count

q=int(input())
if(powtwo(q)==1):
    print("YES")
else:
    print("NO")