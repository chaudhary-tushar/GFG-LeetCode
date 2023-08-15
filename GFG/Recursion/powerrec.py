def powrec(a,b):
    if(b==1):
        return a
    return a*powrec(a,b-1)

x,y=map(int,input().split())
print(powrec(x,y))