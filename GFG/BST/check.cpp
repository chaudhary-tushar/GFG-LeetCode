#include<iostream>
#include"../ds.h"
using namespace std;

int main() {
    BST<int> bst;

    // Insertion
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);
    bst.levelorder();
    // Search
    cout << "Searching for value 40: " << (bst.search(40) ? "Found" : "Not found") << endl;
    cout << "Searching for value 90: " << (bst.search(90) ? "Found" : "Not found") << endl;

    // Removal
    bst.remove(40);

    // Traversals
    cout << "Inorder traversal: ";
    bst.inorder();
    cout << endl;

    cout << "Preorder traversal: ";
    bst.preorder();
    cout << endl;

    cout << "Postorder traversal: ";
    bst.postorder();
    cout << endl;
    bst.levelorder();


    // Height
    cout << "Tree height: " << bst.height() << endl;

    // Size
    cout << "Tree size: " << bst.size() << endl;

    // Check if tree is empty
    cout << "Is tree empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;

    // Floor and Ceil
    BNode<int>* floorNode = bst.floor(35);
    BNode<int>* ceilNode = bst.ceil(55);
    cout << "Floor of 35: " << (floorNode ? to_string(floorNode->key) : "Not found") << endl;
    cout << "Ceil of 55: " << (ceilNode ? to_string(ceilNode->key) : "Not found") << endl;

    return 0;
}
