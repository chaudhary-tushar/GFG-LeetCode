def perms(s,i=0):
    if i==len(s):
        print(s)
        return
    for j in range(i,len(s)):
        m=list(s)
        m[i],m[j]=m[j],m[i]
        s=''.join(m)
        perms(s,i+1)
        m=list(s)
        m[i],m[j]=m[j],m[i]
        s=''.join(m)
        
q=input()
perms(q)
        