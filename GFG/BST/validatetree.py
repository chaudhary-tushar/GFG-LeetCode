import ds

def validate(root,low,high):
    if(root is None):
        return True
    if(root.key>low and root.key<high):
        return (validate(root.left,low,root.key) and validate(root.right,root.key,high) )
    else:
        return False
    
root= ds.TNode(20)
root.left=ds.TNode(8)
root.right=ds.TNode(30)
root.right.left=ds.TNode(25)
root.right.right=ds.TNode(35)
print(validate(root,-1000,1000))