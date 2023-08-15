import ds

def loopnode(dl):
    fcurr=dl.head.next.next
    scurr=dl.head.next
    while(scurr!=fcurr):
        scurr=scurr.next
        fcurr=fcurr.next.next
    scurr=dl.head
    while(True):
        if(scurr==fcurr):
            return fcurr
        scurr=scurr.next
        fcurr=fcurr.next

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
while(curr!=None and i<20):
    print(curr.data)
    curr=curr.next
    i+=1
print(tail.data," ",tail.next.data)
print("**********")
print(loopnode(dll).data)