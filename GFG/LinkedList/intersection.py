import ds

def inter(dl,sl):
    dcurr=dl.head
    scurr=sl.head
    c1=dl.size()
    c2=sl.size()
    print(dcurr.data,scurr.data)
    diff=abs(c1-c2)
    while(diff!=0):
        if(c1>c2):
            dcurr=dcurr.next
            print("dcurr foeward")
        else:
            scurr=scurr.next
            print("scurr forward")
        diff-=1
    print(dcurr.data,scurr.data)
    while(dcurr!=scurr):
        dcurr=dcurr.next
        scurr=scurr.next
    return dcurr

dll=ds.LinkedList()
sll=ds.LinkedList()
for i in range(1,6):
    dll.insert(i*5)
    sll.insert(i*10)
curr=sll.head
turr=dll.head
while(curr.next!=None):
    curr=curr.next
    turr=turr.next
curr.next=turr
q=1
for i in range(11,21):
    dll.insert(i*7)
    q+=1
sll.sz+=q
dll.display()
print()
sll.display()
res=inter(dll,sll)
print(res.data)