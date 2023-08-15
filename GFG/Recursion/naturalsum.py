def nnsum(n):
    if (n-1)==0:
        return n
    return n+nnsum(n-1)

x=int(input())
print(nnsum(x))


# if not through recursion then following applied
# def nsum(n):
#     if ((n!=0) and (n-1)!=0):
#         return (n*(n+1))//2
    
# x=int(input())
# print(nsum(x))