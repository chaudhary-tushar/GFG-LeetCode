def subseq(s1,s2):
    n1=len(s1)
    n2=len(s2)
    i=0
    j=0
    while(i<n1 and j<n2):
        if(s1[i]==s2[j]):
            i+=1
            j+=1
        i+=1
    return j==n2

q1="ABCDEFG"
q2="ADG"
print(subseq(q1,q2))