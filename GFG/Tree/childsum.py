import ds

def csum(root):
    if(root.left is None and root.right is None):
        return True
    suma=0
    if(root.left!=None):
        suma+=root.left.key
    if(root.right!=None):
        suma+=root.right.key
    return(root.key==suma and csum(root.left) and csum(root.right))
    

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
print(csum(root))