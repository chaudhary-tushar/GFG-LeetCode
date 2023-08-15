import ds


def pvsum(root,i,arr):
    if (root is None):
        return 0
    arr[i]+=root.key
    pvsum(root.left,i-1,arr)
    pvsum(root.right,i+1,arr)
    


root=ds.BST()
arr=[60,40,80,20,50,70,100,10,30,90,110]
for i in arr:
    root.insert(i)
root.levelorder()
print()
k=2*(root.height())-1
j=(k//2+1)
br=[0]*(k+1)
pvsum(root.root,j,br)
print(br)