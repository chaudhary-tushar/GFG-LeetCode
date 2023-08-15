import ds

def searchl(ll,x):
    if(ll.head is None):
        return -1
    curr=ll.head
    i=0
    while(curr!=None):
        if(curr.data==x):
            return i
        curr=curr.next
        i+=1
    return -1

tl=ds.LinkedList()
tl.insert(5)
tl.insert(10)
tl.insert(15)
tl.insert(20)
print(searchl(tl,15))
tl.display()
    