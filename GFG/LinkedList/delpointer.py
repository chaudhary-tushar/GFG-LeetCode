import ds

def delwpointer(point):
    point.data=point.next.data
    point.next=point.next.next
    
dll=ds.LinkedList()
for i in range(1,11):
    dll.insert(i*10)
dll.display()
print(dll.size())
x=int(input("for node addr:  "))
curr=dll.head
for i in range(x):
    curr=curr.next
print(curr.data)
delwpointer(curr)
dll.display()