import ds

def deleteend(ll):
    if(ll.head is None or ll.head.next is None):
        return
    curr=ll.head
    while(curr.next.next!=None):
        curr=curr.next
    curr.next=None
    
tl=ds.LinkedList()
tl.insert(5)
tl.insert(10)
tl.insert(15)
tl.insert(20)
deleteend(tl)
tl.display()