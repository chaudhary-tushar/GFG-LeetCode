import ds

def revk(head,k):
    curr=head
    nert=None
    prev=None
    count=0
    while(curr!=None and count<k):
        nert=curr.next
        curr.next=prev
        prev=curr
        curr=nert
        count+=1
    if(nert!=None):
        rest_head=revk(nert,k)
        head.next=rest_head
    return prev

dll=ds.LinkedList()
for i in range(1,11):
    dll.insert(i*10)
dll.display()
print("")
dll.head=revk(dll.head,3)
dll.display()
        
    