
import ds

class curobj:
    def __init__(self,node,data):
        self.node=node
        self.key=data

def vertical(node,mdict):
    if(node is None):
        return 
    q=ds.Queue()
    rot=curobj(node,0)
    q.enqueue(rot)
    i=0
    while(q.isEmpty()==False):
        temp=q.front()
        q.deque()
        curr=temp.node
        j=temp.key
        if j not in mdict :
            mdict[j]=[curr.key]
        else:
            mdict[j].append(curr.key)
        if(curr.left!=None):
            rot=curobj(curr.left,j-1)
            q.enqueue(rot)
        if(curr.right!=None):
            rot=curobj(curr.right,j+1)
            q.enqueue(rot)
    
arr=[50,30,70,20,40,60,80,100,15,35,45,55,65]
bst=ds.BST()
for i in arr:
    bst.insert(i)

bst.levelorder()
mdict={}
print()
vertical(bst.root,mdict)
for key,value in mdict.items():
    print(key," ",value[0])

