import ds

def reversedll(dl):
    if(dl.head is None):
        return
    curr=dl.head
    while(curr.next!=None):
        curr.next,curr.prev=curr.prev,curr.next
        curr=curr.prev
    dl.head=curr
    temp=curr.next
    curr.next=curr.prev
    curr.prev=temp
    
dll=ds.DLList()
dll.insert(5)
dll.insert(10)
dll.insert(15)
dll.insert(20)
dll.display()
reversedll(dll)
dll.display()
