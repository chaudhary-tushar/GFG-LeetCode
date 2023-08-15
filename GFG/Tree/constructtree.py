import ds


def levelord(root):
    q=ds.Queue()
    q.enqueue(root)
    while(q.isEmpty()==False):
        n=q.size()
        for _ in range(n):
            tp=q.front()
            print(tp.key,end=" ")
            if(tp.left!=None):
                q.enqueue(tp.left)
            if(tp.right!=None):
                q.enqueue(tp.right)
            q.deque()
        print()
    return
            
            
def maketree(ino,pre):
    if(len(ino)==0 or len(pre)==0):
        return None
    root=ds.TNode(pre[0])
    x=ino.index(pre[0])
    lino=ino[:x]
    rino=ino[x+1:]
    lpre=pre[1:x+1]
    rpre=pre[x+1:]
    root.left=maketree(lino,lpre)
    root.right=maketree(rino,rpre)
    return root
    
preIndex=0
def effmake(ino,pre,ia,ie):
    if(ia>ie):
        return None
    global preIndex
    root=ds.TNode(pre[preIndex])
    preIndex+=1
    inIndex=ino.index(root.key)
    root.left=effmake(ino,pre,ia,inIndex-1)
    root.right=effmake(ino,pre,inIndex+1,ie)
    return root    




# q =[20,10,30]
# q =[40,20,50,10,30,80,70,90]
q =[40,20,50,10,60,30,70]
# w =[10,20,30]
# w =[10,20,40,50,30,70,80,90]
w= [10,20,40,50,30,60,70]
# root=maketree(q,w)
root=effmake(q,w,0,6)
levelord(root)
