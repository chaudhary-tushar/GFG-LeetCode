import ds

def insertend(ll,x):
    temp=ds.Node(x)
    if(ll.head is None):
        ll.head=temp
    curr=ll.head
    while(curr.next!=None):
        curr=curr.next
    curr.next=temp
    
tl=ds.LinkedList()
tl.insert(5)
tl.insert(10)
tl.insert(15)
tl.insert(20)
insertend(tl,100)
tl.display()