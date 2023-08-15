def sieve(n):
    isPrime = [True for i in range(n+1)]
    i =2
    while i*i<=n:
        if isPrime[i]:
            j=2*i
            while j<=n:
                isPrime[j]=False
                j=j+i
        i+=1
    for q in range(2,n):
        if isPrime[q]:
            print(q,end=" ")
            
n= int(input("Enter number: "))
sieve(n)
