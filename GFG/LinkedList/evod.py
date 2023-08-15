import ds

def segregrate(dl):
    ev=ds.LinkedList()
    od=ds.LinkedList()
    curr=dl.head
    while(curr!=None):
        if((curr.data)%2==0):
            ev.insert(curr.data)
        else:
            od.insert(curr.data)
        curr=curr.next
    err=ev.head
    while(err.next!=None):
        err=err.next
    err.next=od.head
    return ev

dll=ds.LinkedList()
for i in range(11,26):
    dll.insert(i)
res=segregrate(dll)
res.display()
    