import ds

def cinsert(dl,x):
    temp=ds.Node(x)
    if(dl.head is None):
        dl.head=temp
        temp.next=dl.head
    curr=dl.head
    while(curr.next!=None):
        curr=curr.next
    curr.next=temp
    temp.next=dl.head
    return

dll=ds.LinkedList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
cinsert(dll,500)
dll.display()        