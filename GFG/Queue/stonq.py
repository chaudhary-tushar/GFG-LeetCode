import ds

class mSt:
    def __init__(self):
        self.q1=ds.Queue()
        self.q2=ds.Queue()
        self.sz=0
    def size(self):
        return self.sz
    def isEmpty(self):
        return self.sz==0
    def top(self):
        return self.q1.front()
    def push(self,data):
        while(self.q1.isEmpty()==False):
            self.q2.enqueue(self.q1.deque())
        self.q1.enqueue(data)
        while(self.q2.isEmpty()==False):
            self.q1.enqueue(self.q2.deque())
        self.sz+=1
    def pop(self):
        self.sz-=1
        return self.q1.deque()
    
st=mSt()
for i in range(1,11):
    st.push(i*10)
print(st.size()," ",st.isEmpty())
while(st.isEmpty()==False):
    print(st.pop(),end=" ")