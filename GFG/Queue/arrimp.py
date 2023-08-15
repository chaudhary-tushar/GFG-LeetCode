import ds 

q=ds.Queue()
for i in range(1,11):
    q.enqueue(i*10)
print(q.size()," ",q.isEmpty())
while(q.isEmpty()==False):
    print(q.front()," ",q.rear())
    print(q.deque())