import ds

def delend(dl):
    if(dl.head is None):
        return
    curr=dl.head
    while(curr.next.next!=None):
        curr=curr.next
    curr.next=None
    
dll=ds.DLList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
delend(dll)
dll.display()