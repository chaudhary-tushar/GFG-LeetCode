def ntoone(n):
    if n==0:
        return
    print(n,end=" ") 
    ntoone(n-1)
    
x=int(input())
ntoone(x)