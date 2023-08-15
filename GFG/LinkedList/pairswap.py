import ds

def pswap(dl):
    curr=dl.head
    while(curr!=None and curr.next!=None ):
        curr.data,curr.next.data=curr.next.data,curr.data
        print(curr.data)
        curr=curr.next.next
        
    return

dll=ds.LinkedList()
for i in range(1,21):
    dll.insert(i*10)
pswap(dll)
dll.display()