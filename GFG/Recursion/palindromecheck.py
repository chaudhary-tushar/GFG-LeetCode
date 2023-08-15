def check(asd):
    n= len(asd)
    if (n==0 or n==1):
        return True
    if (asd[0]==asd[-1]):
        return check(asd[1:-1])
    else: 
        return False

x = input()
print(check(x))
