import ds

def insend(dl,x):
    temp=ds.DNode(x)
    if(dl.head is None):
        dl.head = temp
        return
    curr=dl.head
    while(curr.next!=None):
        curr=curr.next
    curr.next=temp
    temp.prev=curr
    return

dll=ds.DLList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
insend(dll,100)
dll.display()
