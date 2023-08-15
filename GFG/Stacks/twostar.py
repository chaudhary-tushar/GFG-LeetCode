class twostack:
    def __init__(self):
        self.arr=[0]*50
        self.sz1=0
        self.sz2=0
        self.top1=0
        self.top2=-1
    def push1(self,data):
        self.arr[self.top1]=data
        self.top1+=1
        self.sz1+=1
    def push2(self,data):
        self.arr[self.top2]=data
        self.top2-=1
        self.sz2+=1
    def pop1(self):
        res=self.arr[self.top1]
        self.arr[self.top1]=0
        self.top1-=1
        self.sz1-=1
        return res
    def pop2(self):
        res=self.arr[self.top2]
        self.arr[self.top2]=0
        self.top2+=1
        self.sz2-=1
        return res
    def isEmpty1(self):
        return self.sz1==0
    def isEmpty2(self):
        return self.sz2==0
    def size1(self):
        return self.sz1
    def size2(self):
        return self.sz2
    
    def peek1(self):
        return self.arr[self.top1]
    def peek2(self):
        return self.arr[self.top2]
    
ts=twostack()
print(ts.arr[ts.top2])
i=1
while(i<26):
    if(i%2==0):
        ts.push1(i)
    else:
        ts.push2(i)
    i+=1

print(ts.size1()," ** ",ts.size2())
print(ts.arr)    
        
        