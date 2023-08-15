import ds

def sortedins(dl,x):
    temp=ds.Node(x)
    if(dl.head is None):
        dl.head=temp
        return
    curr=dl.head
    while(curr.next!=None and curr.next.data<x):
        curr=curr.next
    temp.next=curr.next
    curr.next=temp
    return

dll=ds.LinkedList()
dll.insert(10)
dll.insert(20)
dll.insert(30)
dll.insert(40)
sortedins(dll,25)
dll.display()