import ds

def lrec(root,level):
    if(root is None):
        return
    global maxlevel;
    if(maxlevel<level):
        print(root.key)
        maxlevel=level
    lrec(root.left,level+1)
    lrec(root.right,level+1)
    
def pleft(root):
    q=ds.Queue()
    q.enqueue(root)
    while(q.isEmpty()==False):
        n=q.size()
        for i in range(n):
            curr=q.front()
            if(i==0):
                print(curr.key)
            if(curr.left!=None):
                q.enqueue(curr.left)
            if(curr.right!=None):
                q.enqueue(curr.right)
            q.deque()

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
maxlevel=0
# lrec(root,1)
pleft(root)