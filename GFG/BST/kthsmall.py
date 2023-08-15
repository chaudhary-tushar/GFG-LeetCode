import ds

class KNode:
    def __init__(self,data):
        self.key=data
        self.left=None
        self.right=None
        self.lcount=0
        
    def __insert(self,node,data):  # sourcery skip: remove-redundant-pass
        if data < node.key:
            if node.left is None:
                node.lcount+=1
                node.left = KNode(data)
            else:
                node.lcount+=1
                self.__insert(node.left, data)
        elif data > node.key:
            if node.right is None:
                node.right = KNode(data)
            else:
                self.__insert(node.right, data)
        else:
            # Value already exists in the tree, handle accordingly
            pass
    def insert(self,node,data):
        if node is None:
            node = KNode(data)
        else:
            self.__insert(node,data)
            
    def inorder(self,node):
        if(node is None):
            return
        self.inorder(node.left)
        print(node.key," * ",node.lcount)
        self.inorder(node.right)
        
arr=[20,100,10,40,70,120,60,80,4]
root=KNode(50)
for i in arr:
    root.insert(root,i)

root.inorder(root)
        