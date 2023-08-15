import ds

def delend(dl):
    if(dl.head is None):
        return 
    dl.head=dl.head.next
    dl.head.prev=None
    return

dll=ds.DLList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
delend(dll)
dll.display()