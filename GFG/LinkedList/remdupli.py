import ds

def remdupli(dl):
    if(dl.head is None):
        return 
    curr=dl.head
    while(curr.next!=None):
        if(curr.data==curr.next.data):
            curr.next=curr.next.next
        else:
            curr=curr.next
            
dll=ds.LinkedList()
for i in range(1,11):
    dll.insert(i*10)
    dll.insert(i*10)
dll.display()
remdupli(dll)
dll.display()
