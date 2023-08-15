import ds

def revll(dl):
    if(dl.head is None or dl.head.next is None):
        return
    curr=dl.head
    prev=None
    pred=None
    while(curr.next!=None):
        pred=curr.next
        curr.next=prev
        prev=curr
        curr=pred
    dl.head=curr
    curr.next=prev
    return

dll=ds.LinkedList()
for i in range(1,11):
    dll.insert(i*10)
dll.display()
revll(dll)
dll.display()
    