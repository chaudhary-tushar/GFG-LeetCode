import ds

def insertbegin(ll,x):
    temp=ds.Node(x)
    if(ll.head is None):
        ll.head=temp
        return temp
    temp.next=ll.head
    ll.head=temp
    

tl=ds.LinkedList()
tl.insert(5)
tl.insert(10)
tl.insert(15)
tl.insert(20)
insertbegin(tl,2)
tl.display()
    