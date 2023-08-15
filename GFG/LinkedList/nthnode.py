import ds

def nthend(dl,n):
    if(dl.head is None or n>dl.size()):
        return
    curr=dl.head
    ncurr=dl.head
    i=0
    while(curr!=None):
        if(i>=n):
            curr=curr.next
            ncurr=ncurr.next
        else:
            curr=curr.next
        i+=1
    return ncurr.data

dll=ds.LinkedList()
for i in range(1,11):
    dll.insert(i*10)
dll.display()
print(nthend(dll,3))
    