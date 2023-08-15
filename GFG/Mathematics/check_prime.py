def isPrime(z):
    if (z%2==0):
        return False
    elif (z%3==0):
        return False
    i=5
    while (i*i<=z):
        if z%i==0:
            return False
        i+=1
    return True

q=int(input("Enter number to check for prime: "))
print(isPrime(q))