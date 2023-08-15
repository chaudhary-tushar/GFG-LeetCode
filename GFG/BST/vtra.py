import ds

def vertical(node,i,mdict):
    if(node is None):
        return 
    vertical(node.left,i-1,mdict)
    if i not in mdict :
        mdict[i]=[node.key]
    else:
        mdict[i].append(node.key)
    
    vertical(node.right,i+1,mdict)
    
    
arr=[50,30,70,20,40,60,80,100]
bst=ds.BST()
for i in arr:
    bst.insert(i)

bst.levelorder()
mdict={}
vertical(bst.root,0,mdict)
for key,value in mdict.items():
    print(key," ",value)
