import ds

class mQue:
    def __init__(self):
        self.ll=ds.LinkedList()
        self.sz=0
        self.tail=None
    
    def size(self):
        return self.sz
    def isEmp(self):
        return self.sz==0
    def enqu(self,data):
        if(self.isEmp()):
            self.ll.insert(data)
            self.tail=self.ll.head
        else:
            self.ll.insert(data)
            self.tail=self.tail.next
        self.sz+=1
        return
    def dequ(self):
        res=self.ll.head.data
        self.ll.head=self.ll.head.next
        self.sz-=1
        return res
    def front(self):
        return self.ll.head.data
    def rear(self):
        return self.tail.data
    
q=mQue()
for i in range(1,11):
    q.enqu(i*10)
print(q.size()," ",q.isEmp())
while(q.isEmp()==False):
    print(q.front()," ",q.rear())
    print(q.dequ())