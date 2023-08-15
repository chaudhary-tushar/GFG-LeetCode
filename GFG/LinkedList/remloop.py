import ds

def brloop(dl):
    scurr=dl.head.next
    fcurr=dl.head.next.next
    while(fcurr!=scurr):
        fcurr=fcurr.next.next
        scurr=scurr.next
    scurr=dl.head
    while(True):
        if(fcurr.next==scurr.next):
            break
        fcurr=fcurr.next
        scurr=scurr.next
    fcurr.next=None
    
    
dll=ds.LinkedList()
dll.insert(1)
tail=dll.head
for i in range(1,6):
    dll.insert(i*5)
    tail=tail.next
temp=ds.Node(500)
tail.next=temp
tail=tail.next
for i in range(6,11):
    dll.insert(i*10)
    tail=tail.next
tail.next=temp
i=0
curr=dll.head

print(tail.data," ",tail.next.data)
brloop(dll)
print("**********")
dll.display()