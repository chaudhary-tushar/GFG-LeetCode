def divisors(q):
    i=1
    while i*i<=q:
        if q%i==0:
            print(f"{i} {q//i}")
            i+=1
        else:
            i+=1

a=int(input("Enter number: "))
divisors(a)