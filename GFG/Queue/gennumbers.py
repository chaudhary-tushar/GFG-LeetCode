import ds

def printN(n):
    q=ds.Queue()
    q.enqueue("5")
    q.enqueue("6")
    i=0
    while(i<n):
        curr=q.deque()
        print(curr,end=" ")
        q.enqueue(curr+'5')
        q.enqueue(curr+'6')
        i+=1
    return

printN(50)