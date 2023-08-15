def dsum(n):
    if n<10:
        return n
    return n%10+dsum(n//10)

x=int(input())
print(dsum(x))