def rec_factorial(n):
    if n==1:
        return n
    return n*rec_factorial(n-1)

def loop_factorial(n):
    fact=1
    while n>=1:
        fact=fact*n
        n-=1
    return fact

print(rec_factorial(25))
print(loop_factorial(20))