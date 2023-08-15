import ds


def lca(root,n1,n2):
    if(root is None):
        return None
    if(root.key==n1 or root.key==n2):
        return root
    lca1=lca(root.left,n1,n2)
    lca2=lca(root.right,n1,n2)
    if(lca1 is not None and lca2 is not None):
        return root
    if(lca1 is not None):
        return lca1
    else:
        return lca2



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
print(lca(root,55,70).key)



