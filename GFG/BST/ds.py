class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        
class LinkedList:
    def __init__(self):
        self.head=None
        self.sz=0
    def isEmpty(self):
        return self.sz==0
    
    def size(self):
        return self.sz
    
    def insert(self,data):
        temp=Node(data)
        if self.head is None:
            self.head=temp
            self.sz+=1
            return
        curr=self.head
        while(curr.next!=None):
            curr=curr.next
        curr.next=temp
        self.sz+=1
        return
    
    def remove(self,data):
        if(self.head is None):
            print("Empty LinkedList")
            return
        if(self.head.data==data):
            self.head=self.head.next
            self.sz-=1
            return
            
        current = self.head
        prev = None
        while current:
            if current.data == data:
                prev.next = current.next
                self.sz-=1
                return
            prev = current
            current = current.next
            
    def display(self):
        if self.head is None:
            print("Empty list")
            return
        curr=self.head
        while(curr!=None):
            print(curr.data,"->",end="")
            curr=curr.next
        print("None")
        return
    
class DNode():
    def __init__(self,data):
        self.next=None
        self.prev=None
        self.data=data

class DLList():
    def __init__(self):
        self.head=None
        self.sz=0
        
    def isEmpty(self):
        return self.sz==0
    def size(self):
        return self.sz
    
    def insert(self,data):
        temp=DNode(data)
        if (self.head is None):
            self.head=temp
            self.sz+=1
            return
        curr=self.head
        while(curr.next!=None):
            curr=curr.next
        curr.next=temp
        temp.prev=curr
        self.sz+=1
        return
    
    def remove(self,data):
        if(self.head is None):
            print("DLList is already empty")
            return
        if(self.head.data==data):
            self.head=self.head.next
            self.head.prev=None
            self.sz-=1
            return
        curr=self.head
        while(curr.next!=None):
            if(curr.next.data==data):
                curr.next=curr.next.next
                curr.next.prev=curr
                self.sz-=1
                return
        print("Element not found")
        
    def display(self):
        curr=self.head
        while(curr!=None):
            print(curr.data,end="<->")
            curr=curr.next
        print("None")
        return
    
class Stack:
    def __init__(self):
        self.arr=[]
        self.sz=0
    def push(self,data):
        self.arr.append(data)
        self.sz+=1
    def pop(self):
        res= self.arr[self.sz-1]
        self.arr.pop(-1)
        self.sz-=1
        return res
    def top(self):
        return self.arr[-1]
    def isEmpty(self):
        return self.sz==0
    def size(self):
        return self.sz
    
class Queue:
    def __init__(self):
        self.arr=[]
        self.sz=0
    def enqueue(self,data):
        self.arr.insert(0,data)
        self.sz+=1
    def deque(self):
        res=self.arr[-1]
        self.arr.pop()
        self.sz-=1
        return res
    def front(self):
        return self.arr[-1]
    
    def rear(self):
        return self.arr[0]
    def size(self):
        return self.sz
    def isEmpty(self):
        return self.sz==0
    
        
class Deque:
    def __init__(self):
        self.arr=[]
        self.sz=0
        self.fz=0
        self.rz=0
    def size(self):
        return self.sz
    def isEmpty(self):
        return self.sz==0
    def insertf(self,data):
        self.arr.insert(self.fz,data)
        self.sz+=1
        self.fz+=1
        return
        
    def insertr(self,data):
        if(self.rz<1):
            self.arr.append(data)
            self.rz+=1
            self.sz+=1
            return
        self.arr.insert(-(self.rz),data)
        self.sz+=1
        self.rz+=1
        return
    
    def deletef(self):
        res=self.arr[0]
        self.arr.pop(0)
        self.sz-=1
        return res
        
    def deleter(self):
        res=self.arr[-1]
        self.arr.pop()
        self.sz-=1
        return res
    
    def getf(self):
        return self.arr[0]
        
    def getr(self):
        return self.arr[-1]
        
        
class TNode:
    def __init__(self,data):   
        self.key=data
        self.left=None
        self.right=None
        

class BNode:
    def __init__(self,data):   
        self.key=data
        self.left=None
        self.right=None
        self.parent=None

        
class BST:
    def __init__(self):
        self.root=None
    
    def getSize(self, node):
        if node is None:
            return 0
        return self.getSize(node.left) + self.getSize(node.right) + 1
    
    def size(self):
        return self.getSize(self.root)
    
    def isEmpty(self):
        return self.size()==0

# PRIVATE FUNCTIONS:-
    
    def __search(self,node,data):
        if(node is None):
            return False
        elif(node.key==data):
            return True
        elif(node.key<data):
            return self.__search(node.right,data)
        else:
            return self.__search(node.left,data)
            
    
    def __insert(self,node,data):  # sourcery skip: remove-redundant-pass
        if data < node.key:
            if node.left is None:
                node.left = BNode(data)
            else:
                self.__insert(node.left, data)
        elif data > node.key:
            if node.right is None:
                node.right = BNode(data)
            else:
                self.__insert(node.right, data)
        else:
            # Value already exists in the tree, handle accordingly
            pass
    
    def __getsuccessor(self,node):
        node=node.right
        while(node!=None and node.left!=None):
            node=node.left
        return node
    
    def __delete(self,node,data):
        # sourcery skip: inline-immediately-returned-variable, merge-else-if-into-elif
        if (node is None):
            return node
        if (node.key<data):
            node.right=self.__delete(node.right,data)
        elif (node.key>data):
            node.left=self.__delete(node.left,data)
        else:
            if(node.left is None):
                temp = node.right
                return temp
            elif (node.right is None):
                temp=node.left
                return temp
            else:
                temp=self.__getsuccessor(node)
                node.key=temp.key
                node.right=self.__delete(node.right,temp.key)
        return node
                
    def __height(self,node):
        if(node is None):
            return 0
        return max(self.__height(node.left),self.__height(node.right))+1
    
    
    def __floor(self,node,data):
        res=None
        while(node!=None):
            if(node.key==data):
                return node
            elif(node.key>data):
                node=node.left
            else:
                res=node
                node=node.right
        return res
    
    def __ceil(self,node,data):
        res=None
        while(node!=None):
            if(node.key==data):
                return node
            elif(node.key>data):
                res=node
                node=node.left
            else:
                node=node.right
        return res
    
    def __inorder(self,node):
        if(node is None):
            return
        self.__inorder(node.left)
        print(node.key,end=" ")
        self.__inorder(node.right)
        
    def __preorder(self,node):
        if(node is None):
            return
        print(node.key,end=" ")
        self.__preorder(node.left)
        self.__preorder(node.right)
        
    def __postorder(self,node):
        if(node is None):
            return
        self.__postorder(node.left)
        self.__postorder(node.right)
        print(node.key,end=" ")
        
    def __levelorder(self,node):
        q=Queue()
        q.enqueue(node)
        while (q.isEmpty()==False):
            n=q.size()
            for _ in range(n):
                temp=q.front()
                q.deque()
                print(temp.key,end=" ")
                if(temp.left!=None):
                    q.enqueue(temp.left)
                if(temp.right!=None):
                    q.enqueue(temp.right)
            print()
        
    
# PUBLIC FUNCTIONS:-
                        
    def search(self,data):
        return self.__search(self.root,data)     
    def insert(self,data):
        if self.root is None:
            self.root = BNode(data)
        else:
            self.__insert(self.root,data)
    def delete(self,data):
        self.__delete(self.root,data)
    def height(self):
        return self.__height(self.root)
    def floor(self,data):
        return self.__floor(self.root,data)
    def ceil(self,data):
        return self.__ceil(self.root,data)
    def inorder(self):
        self.__inorder(self.root)
    def preorder(self):
        self.__preorder(self.root)    
    def postorder(self):
        self.__postorder(self.root)    
    def levelorder(self):
        self.__levelorder(self.root)
