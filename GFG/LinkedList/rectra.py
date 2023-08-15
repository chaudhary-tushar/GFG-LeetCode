import ds

def nortra(ll):
    if ll is None:
        return 
    curr=ll
    while(curr!=None):
        print(curr.data,end=" ")
        curr=curr.next
    return

def rectra(ll):
    if(ll is None):
        return
    print(ll.data,end=" ")
    return rectra(ll.next)

tl=ds.LinkedList()
for i in range(1,11):
    tl.insert(i)

tl.display()
print("*")
nortra(tl.head)
print("*")
rectra(tl.head)