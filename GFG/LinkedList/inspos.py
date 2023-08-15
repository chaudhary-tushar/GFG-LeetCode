import ds

def insertpos(ll,x,k):
    if(ll.head is None or ll.size()<k):
        return
    temp=ds.Node(x)
    i=0
    curr=ll.head
    while(curr.next!=None and i<k-1):
        curr=curr.next
        i+=1
    temp.next=curr.next
    curr.next=temp
    
tl=ds.LinkedList()
tl.insert(5)
tl.insert(10)
tl.insert(15)
tl.insert(20)
insertpos(tl,100,2)
tl.display()