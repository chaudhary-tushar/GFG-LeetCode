import ds

def height(root):
    return 0 if (root is None) else max(height(root.left),height(root.right))+1

def isbal(root):
    if(root is None):
        return True
    lh=height(root.left)
    rh=height(root.right)
    return( abs(lh-rh)<=1 and isbal(root.left) and isbal(root.right))

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
print(isbal(root))