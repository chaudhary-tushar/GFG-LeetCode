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