def isPrime(z):
    if (z!=2 and z%2==0):
        return False
    elif (z!=3 and z%3==0):
        return False
    i=5
    while (i*i<=z):
        if z%i==0:
            return False
        i+=1
    return True

def primefactors(q):
    i=2
    qq=q
    print("1",end=" ")
    while i<=qq:
        if isPrime(i):
            if q%i==0:
                print(f"{i}",end=" ")
                q=q//i
            else:
                i+=1
        else:
            i+=1
        #print(i,end=" ")
            
a=int(input("Enter number: "))
primefactors(a)
            
        
    