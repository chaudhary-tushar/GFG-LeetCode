import ds

def reverseq(q):
    st=ds.Stack()
    while(q.isEmpty()==False):
        st.push(q.deque())
    while(st.isEmpty()==False):
        q.enqueue(st.pop())
    return 

qw=ds.Queue()
for i in range(1,11):
    qw.enqueue(i*10)
reverseq(qw)
while(qw.isEmpty()==False):
    print(qw.deque())