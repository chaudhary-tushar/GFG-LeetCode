def gcd(a,b):
    if (a%b==0):
        return b
    return gcd(b,a%b)

def lcm(a,b):
    return ((a*b)//gcd(a,b))

x,y = map(int,input("enter numbers:").split())
print(lcm(x,y))