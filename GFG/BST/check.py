import ds

bst=ds.BST()

bst.insert(50)
bst.insert(30)
bst.insert(70)
bst.insert(20)
bst.insert(40)
bst.insert(60)
bst.insert(80)

print("ROOT is : ",bst.root.key)

# traversals
bst.levelorder()
print("inorder traversal")
bst.inorder()
print("Preorder traversal")
bst.preorder()
print("Postorder traversal")
bst.postorder()
print()

# search

print("Searching for 40: ")
print("Found") if(bst.search(40)) else print("Not found")
print("Searching for 90: ")
print("Found") if(bst.search(90)) else print("Not found")

bst.delete(40)
print("40 deleted")
bst.levelorder()
# height and size
print("BST height = ",bst.height())
print("BST size = ",bst.size())

#emplty floor and ceil
print("Is BS empty? ",bst.isEmpty())
print("Floor of 35 = ",bst.floor(35).key)
print("Ceil of 55 = ",bst.ceil(55).key)


