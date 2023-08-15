import ds

def recrev(curr,prev):
    if(curr is None):
        return prev
    net=curr.next
    curr.next=prev
    return recrev(net,curr)

dll=ds.LinkedList()
for i in range(1,11):
    dll.insert(i*10)
    
dll.display()
qaz=recrev(dll.head,None)
while(qaz!=None):
    print(qaz.data,end="->")
    qaz=qaz.next
    
    
    