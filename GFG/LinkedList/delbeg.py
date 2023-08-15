import ds

def deletebeg(ll):
    if(ll.head is None or ll.head.next is None):
        return
    ll.head=ll.head.next
    
tl=ds.LinkedList()
tl.insert(5)
tl.insert(10)
tl.insert(15)
tl.insert(20)
deletebeg(tl)
tl.display()