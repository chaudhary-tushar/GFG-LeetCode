import ds

def levelord(root):
    q=ds.Queue()
    q.enqueue(root)
    while(q.isEmpty()==False):
        n=q.size()
        for _ in range(n):
            tp=q.front()
            print(tp.key,end=" ")
            if(tp.left!=None):
                q.enqueue(tp.left)
            if(tp.right!=None):
                q.enqueue(tp.right)
            q.deque()
        print()
    return

def spiral(root):
    q=ds.Queue()
    s=ds.Stack()
    reverse=False
    q.enqueue(root)
    while(q.isEmpty()==False):
        n=q.size()
        for _ in range(n):
            tp=q.front()
            if(reverse):
                s.push(tp)
            else:
                print(tp.key,end=" ")
            if(tp.left!=None):
                q.enqueue(tp.left)
            if(tp.right!=None):
                q.enqueue(tp.right)
            q.deque()
        if(reverse):
            while(s.isEmpty()==False):
                print(s.pop().key,end=" ")
        reverse=~reverse
        print()
    return

def stpiral(root):
    st1=ds.Stack()
    st2=ds.Stack()
    st1.push(root)
    while(st1.isEmpty()==False or st2.isEmpty()==False):
        while(st1.isEmpty()==False):
            temp=st1.top()
            st1.pop()
            print(temp.key,end=" ")
            if(temp.left!=None):
                st2.push(temp.left)
            if(temp.right!=None):
                st2.push(temp.right)
        print()
        while(st2.isEmpty()==False):
            temp=st2.top()
            st2.pop()
            print(temp.key,end=" ")
            if(temp.right!=None):
                st1.push(temp.right)
            if(temp.left!=None):
                st1.push(temp.left)
        print()
            
    
    
    
root=ds.TNode(40)
root.left=ds.TNode(30)
root.left.left=ds.TNode(25)
root.left.left.left=ds.TNode(15)
root.left.right=ds.TNode(35)
root.left.left.right=ds.TNode(28)
root.right=ds.TNode(50)
root.right.left=ds.TNode(45)
root.right.right=ds.TNode(60)
root.right.right.right=ds.TNode(70)
root.right.right.left=ds.TNode(55)
levelord(root)
print()
stpiral(root)