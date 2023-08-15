import ds

dq=ds.Deque()
for i in range(1,11):
    dq.insertf(i*10)
    dq.insertr(i*5)
qaz=dq.arr
for i in qaz:
    print(i,end=" ")
print()
print(dq.getf()," ",dq.getr())
while(dq.isEmpty()==False):
    print(dq.deletef(),end=" * ")
    
    
    
    