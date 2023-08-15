import ds

def lceil(arr):
    bt=ds.BST()
    for i in arr:
        print(bt.ceil(i).key,end=" ") if(bt.ceil(i)!=None) else print(-1,end=" ")
        bt.insert(i)
        
arr=[2,8,30,15,25,12]
lceil(arr)
    