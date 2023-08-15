import ds

def fixb(root):
    global pre,first,second
    if(root is None):
        return
    fixb(root.left)
    if(pre!=None and root.key<pre.key):
        if(first is None):
            first=pre
        second=root
    pre=root
    fixb(root.right)
    
def inorder(root):
    if(root is None):
        return
    inorder(root.left)
    print(root.key,end=" ")
    inorder(root.right)    

    
root= ds.TNode(20)
root.left=ds.TNode(60)
root.left.left=ds.TNode(4)
root.left.right=ds.TNode(10)
root.right=ds.TNode(80)
root.right.left=ds.TNode(8)
root.right.right=ds.TNode(100)
pre=root.right.right.right
first=root.right.right.right
second=root.right.right.right
inorder(root)
fixb(root)
print()
first.key,second.key=second.key,first.key
inorder(root)