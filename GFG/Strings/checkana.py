def ana(s1,s2):
    n1=len(s1)
    n2=len(s2)
    m={}
    for i in range(n1):
        if s1[i] not in m:
            m[s1[i]]=1
        else:
            m[s1[i]]+=1
    for j in range(n2):
        m[s2[j]]-=1
    cnt=sum(m.values())
    
    return cnt==0

q1="listen"
q2="silent"
print(ana(q1,q2))
