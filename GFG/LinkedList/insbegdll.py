import ds

def insbeg(dl,x):
    temp=ds.DNode(x)
    if(dl.head is None):
        dl.head=temp
        return
    temp.next=dl.head
    dl.head.prev=temp
    dl.head=temp
    return

dll=ds.DLList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
insbeg(dll,100)
dll.display()