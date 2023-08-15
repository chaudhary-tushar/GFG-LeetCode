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
            
def postorder(root):
    if(root is None):
        return
    postorder(root.left)
    postorder(root.right)
    print(root.key,end=" ")
    
    
    
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
postorder(root)