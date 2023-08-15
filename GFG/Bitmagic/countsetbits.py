def countsetbit(n):
    count = 0
    while n:
        count+=(n & 1)
        n>>=1
    print(count)
    
x =int(input("enter your number: "))
print(bin(x)[2:])
countsetbit(x)