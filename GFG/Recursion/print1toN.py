def onetoN(n):
    if n==0:
        return ;
    onetoN(n-1)
    print(n)
    
x=int(input())
onetoN(x)