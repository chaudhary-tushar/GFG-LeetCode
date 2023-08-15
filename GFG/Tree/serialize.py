import ds

def serialize(root,arr):
    if(root is None):
        arr.append(-1)
        return
    arr.append(root.key)
    serialize(root.left,arr)
    serialize(root.right,arr)
ind=0
def deserialize(arr):
    global ind
    if (ind==len(arr)):return
    val=arr[ind]
    ind+=1
    if(val==-1):return None
    
    root=ds.TNode(val)
    root.left=deserialize(arr)
    root.right=deserialize(arr)
    return root
    
    
def inorder(root):
    if(root is None):return None
    inorder(root.left)
    print(root.key,end=" ")
    inorder(root.right)


# root=ds.TNode(40)
# root.left=ds.TNode(30)
# root.left.left=ds.TNode(25)
# root.left.left.left=ds.TNode(15)
# root.left.right=ds.TNode(35)
# root.left.left.right=ds.TNode(28)
# root.right=ds.TNode(50)
# root.right.left=ds.TNode(45)
# root.right.right=ds.TNode(60)
# root.right.right.right=ds.TNode(70)
# root.right.right.left=ds.TNode(55)
arr=[40, 30, 25, 15, -1, -1, 28, -1, -1, 35, -1, -1, 50, 45, -1, -1, 60, 55, -1, -1, 70, -1, -1]
root=deserialize(arr)
inorder(root)
