import ds

def tra(dl):
    if(dl.head is None):
        return
    curr=dl.head
    while(curr.next!=dl.head):
        print(curr.data)
        curr=curr.next
    print(curr.data)
    return

dll=ds.LinkedList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
curr=dll.head
while(curr.next!=None):
    curr=curr.next
curr.next=dll.head
tra(dll)
