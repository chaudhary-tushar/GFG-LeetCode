import ds

class Mstack:
    def __init__(self):
        self.lls=ds.LinkedList()
        self.sz=0
        
    def push(self,data):
        temp=ds.Node(data)
        temp.next=self.lls.head
        self.lls.head=temp
        self.sz+=1
        
    def pop(self):
        res=self.lls.head.data
        self.lls.head=self.lls.head.next
        self.sz-=1
        return res
    
    def top(self):
        return self.lls.head.data
    def isEmpty(self):
        return self.sz==0
    def size(self):
        return self.sz
    
ms=Mstack()
for i in range(1,15):
    ms.push(i*5)
print(ms.size()," ",ms.isEmpty())
count=0
while(ms.isEmpty()==False and count<25):
    print(ms.pop(),end="* ")
    count-=1
    
        
        