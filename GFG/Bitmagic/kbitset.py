# binary = bin(number)[2:]

def checkl(n,m):
    if (n & (1<<(m-1))):
        print("YES")
    else:
        print("NO")
        
def checkr(n,m):
    if (1 & (n>>(m-1))):
        print("YES")
    else:
        print("NO")
        
if __name__=="__main__":
    x,y=map(int,input("enter number and k: ").split())
    print(bin(x)[2:])
    checkr(x,y)
    checkl(x,y)
    







