import ds

def convdll(root):
    if(root is None):
        return None
    head=convdll(root.left)
    global pre
    if(pre is None):
        head=root
    else:
        root.left=pre
        pre.right=root
    pre=root
    convdll(root.right)
    return head

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
pre=None
curr=convdll(root)
while(curr!=None):
    print(curr.key,end="<=>")
    curr=curr.right