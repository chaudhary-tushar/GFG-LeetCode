def check(s):
    n=len(s)
    i=0
    j=n-1
    while(i<j):
        if(s[i]!=s[j]):
            return False
        i+=1
        j-=1
    return True

q="malayalam"
print(check(q))
    