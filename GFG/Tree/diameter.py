import ds

def height(root):
    if(root is None):
        return 0
    return max(height(root.left),height(root.right))+1

def dia(root):
    if(root is None):
        return 0
    lh=height(root.left)
    rh=height(root.right)
    
    return max(1+lh+rh,max(dia(root.left),dia(root.right)))




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
print(dia(root))