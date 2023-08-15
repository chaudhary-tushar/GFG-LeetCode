class Stack:
    def __init__(self):
        self.arr=[]
        self.sz=0
    def push(self,data):
        self.arr.append(data)
        self.sz+=1
    def pop(self):
        res= self.arr[self.sz-1]
        self.arr.pop(-1)
        self.sz-=1
        return res
    def top(self):
        return self.arr[-1]
    def isEmpty(self):
        return self.sz==0
    def size(self):
        return self.sz
    
q=Stack()
for i in range(1,6):
    q.push(i*12)
print(q.size())
while(q.isEmpty()==False):
    print(q.pop())
    