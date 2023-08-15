def gensubsets(s,curr="",i=0):
    if(i==len(s)):
        print(curr)
        return
    gensubsets(s,curr,i+1)
    gensubsets(s,curr+s[i],i+1)
    
x=input()
gensubsets(x)