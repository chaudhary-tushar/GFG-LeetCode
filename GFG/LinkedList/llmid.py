import ds 

def lmid(ll):
    if(ll.head is None):
        return 
    scurr=ll.head
    fcurr=ll.head
    while(fcurr!=None and fcurr.next!=None):
        fcurr=fcurr.next.next
        scurr=scurr.next
    return scurr.data

dll=ds.LinkedList()
for i in range(1,10):
    dll.insert(i*10)
dll.display()
print(lmid(dll))