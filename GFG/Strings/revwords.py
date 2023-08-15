def rever(str,i,j):
    while(i<j):
        str[i],str[j]=str[j],str[i]
        i+=1
        j-=1
    return

def revds(str):
    n=len(str)
    i=0
    j=0
    while(j<=n):
        if(str[j]==' ' or j==n-1):
            rever(str,i,j-1)
            i=j+1
            j+=1
        j+=1
    rever(str,0,n-1)
    return
    
qwe="main hoo gian mai hu bda takatwar "
qaz=list(qwe)
revds(qaz)
qwa=''.join(qaz)
print(qwa)