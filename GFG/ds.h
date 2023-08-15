#ifndef DS_H
#define DS_H
#include <iostream>
#include<vector>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
    Node(T x) : data(x), next(nullptr) {}
};

template <typename T>
class LinkedList {
public:
    LinkedList() : head(nullptr), tail(nullptr), sz(0) {}
    ~LinkedList();

    void insert(T value);
    void remove(T value);
    int size();
    bool isEmpty();
    void display();
    Node<T>* head;
    Node<T>* tail;
    int sz;
};

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* temp = current;
        current = current->next;
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::insert(T value) {
    Node<T>* newNode = new Node<T>(value);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    sz++;
}

template <typename T>
void LinkedList<T>::remove(T value) {
    if (head == nullptr) {
        cout << "List is empty. No elements to remove." << endl;
        return;
    }

    if (head->data == value) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        sz--;
        return;
    }

    Node<T>* current = head;
    while (current->next != nullptr) {
        if (current->next->data == value) {
            Node<T>* temp = current->next;
            current->next = current->next->next;
            delete temp;
            sz--;
            return;
        }
        current = current->next;
    }

    cout << "Element not found in the list." << endl;
}

template <typename T>
void LinkedList<T>::display() {
    Node<T>* current = head;
    while (current != nullptr) {
        cout << current->data << "->";
        current = current->next;
    }
    cout <<"NONE"<<endl;
}
template <typename T>
int LinkedList<T>::size(){
    return sz;
}

template <typename T>
bool LinkedList<T>::isEmpty(){
    return sz==0;
}


template <typename T>
struct DNode {
    T data;
    DNode<T>* next;
    DNode<T>* prev;
    DNode(T x) : data(x), next(nullptr), prev(nullptr) {}
};

template <typename T>
class DLList{
public:
    DLList() : head(nullptr), tail(nullptr), sz(0) {}
    ~DLList();
    void insert(T value);
    void remove(T value);
    int size();
    bool isEmpty();
    void display();
    DNode<T>* head;
    DNode<T>* tail;
    int sz;
};

template <typename T>
DLList<T>::~DLList(){
    DNode<T>* current = head;
    while(current!=nullptr){
        DNode<T>* temp;
        current=current->next;
        delete temp;
    }
}

template <typename T>
void DLList<T>::insert(T value){
    DNode<T>* temp=new DNode<T>(value);
    if(head==NULL){
        head=temp;
        tail=temp;
        sz++;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
        sz++;
    }
}
template <typename T>
void DLList<T>::remove(T value){
    if(head==nullptr){
        cout<<"DLList is already Empty";
        return;
    }
    if (head->data == value) {
        DNode<T>* temp = head;
        head = head->next;
        delete temp;
        sz--;
        return;
    }

    Node<T>* current = head;
    while (current->next != nullptr) {
        if (current->next->data == value) {
            DNode<T>* temp = current->next;
            current->next = current->next->next;
            current->next->prev=current;
            delete temp;
            sz--;
            return;
        }
        current = current->next;
    }

    cout << "Element not found in the list." << endl;
}

template <typename T>
int DLList<T>::size(){
    return sz;
}

template <typename T>
bool DLList<T>::isEmpty(){
    return sz==0;
}

template <typename T>
void DLList<T>::display(){
    if(head==nullptr){
        cout<<"DLList is empty";
        return;
    }
    else{
        DNode<T>* current=head;
        while(current!=nullptr){
            cout<<current->data<<"<->";
            current=current->next;
        }
        cout<<"NONE"<<endl;
    }
}


template <typename T>
class Stack{
public:
    Stack() : sz(0) {}
    ~Stack();
    void push(T value);
    T pop();
    T peek();
    int size();
    bool isEmpty();
    vector<T> data;
    int sz;
};

template <typename T>
Stack<T>::~Stack(){
    
}

template <typename T>
void Stack<T>::push(T value){
    data.push_back(value);
    sz++;
    return;
}

template <typename T>
T Stack<T>::pop(){
    if (sz==0){
        cout<<"Stack is empty";
        return 0 ;
    }
    T value=data.back();
    data.pop_back();
    sz--;
    return value;
}

template <typename T>
T Stack<T>::peek(){
    if (sz==0){
        cout<<"Stack is empty";
        return 0;
    }
    T value=data.back();
    return value;
}

template <typename T>
int Stack<T>::size(){
    return sz;
}

template <typename T>
bool Stack<T>::isEmpty(){
    return sz==0;
}

template<typename T>
class Queue{
public:
    Queue() : sz(0) {}
    ~Queue();

    void enque(T value);
    T deque();
    bool isEmpty();
    int size();
    T front();
    T rear();
    vector<T> arr;
    int sz;
};

template <typename T>
Queue<T>::~Queue(){
    
}

template<typename T>
void Queue<T>::enque(T value){
    arr.insert(arr.begin(),value);
    sz++;
    return;
}

template <typename T>
T Queue<T>::deque(){
    T res=arr[sz-1];
    arr.pop_back();
    sz--;
    return res;
}

template <typename T>
bool Queue<T>::isEmpty(){
    return sz==0;
}

template <typename T>
int Queue<T>::size(){
    return sz;
}

template <typename T>
T Queue<T>::front(){
    T res=arr[sz-1];
    return res;
}

template <typename T>
T Queue<T>::rear(){
    T res=arr[0];
    return res;
}

template <typename T>
class Deque{
public:
    Deque() : sz(0),fz(0), rz(0) {}
    int sz;
    int fz;
    int rz;
    vector<int> arr;
    int size(){
        return sz;
    }
    bool isEmpty(){
        return sz==0;
    }
    void insertf(T value){
        arr.insert(arr.begin()+fz,value);
        sz++;
        fz++;
        return;
    }
    void insertr(T value){
        arr.insert(arr.end()-rz,value);
        sz++;
        rz++;
        return;
    }
    T deletef(){
        T res=arr[0];
        arr.erase(arr.begin());
        sz--;
        fz--;
        return res;
    }
    T deleter(){
        T res=arr[arr.size()-1];
        arr.erase(arr.end()-1);
        sz--;
        rz--;
        return res;
    }
    T getf(){
        return arr[0];
    }
    T getr(){
        return arr[arr.size()-1];
    }

};

template <typename T>
class TNode{
public:
    T key;
    TNode* left;
    TNode* right;
    TNode(T k){
        key=k;
        left=nullptr;
        right=nullptr;
    }
};


template <typename T>
class BNode{
public:
    T key;
    BNode* left;
    BNode* right;
    BNode* parent;
    BNode(T k){
        key=k;
        left=nullptr;
        right=nullptr;
    }
};


template <typename T>
class BST{
private:
    bool search(BNode<T>* treeNode,T data);
    void insert(BNode<T>* treeNode, T data);
    int  getHeight(BNode<T>* treeNode);
    int getSize(BNode<T>* root);
    BNode<T>* remove(BNode<T>* treeNode, T data);
    BNode<T>* getSuccessor(BNode<T>* node);
    BNode<T>* floor(BNode<T>* node,T data);
    BNode<T>* ceil(BNode<T>* node,T data);
    void inOrder(BNode<T>* treeNode);
    void preOrder(BNode<T>* treeNode);
    void postOrder(BNode<T>* treeNode);
    void levelOrder(BNode<T>* treeNode);
    void destroy(BNode<T>* node);
public:
    BST() : _root(nullptr) {}
    ~BST();
    BNode<T>* _root;
    bool search(T data){return search(_root,data);}
    void insert(T data){insert(_root,data);}
    void remove(T data){remove(_root,data);}
    void inorder(){inOrder(_root);}
    void preorder(){preOrder(_root);}
    void postorder(){postOrder(_root);}
    void levelorder(){levelOrder(_root);}
    int height(){return getHeight(_root);}
    int size(){return getSize(_root);}
    bool isEmpty(){return getSize(_root)==0;}
    BNode<T>* floor(T data){return floor(_root,data);}
    BNode<T>* ceil(T data){return ceil(_root,data);}
};

template <typename T>
BST<T>::~BST(){
    destroy(_root);
}

template <typename T>
void BST<T>::destroy(BNode<T>* node){
    if(node==NULL){
        return;
    }
    destroy(node->left);
    destroy(node->right);
    delete node;
}

template <typename T>
bool BST<T>::search(BNode<T>* node,T data){
    if(node==NULL){
        return false;
    }
    else if(node->key==data){
        return true;
    }
    else if(node->key<data){
        search(node->right ,data);
    }
    else{
        search(node->left,data);
    }
}

template <typename T>
void BST<T>::insert(BNode<T>* treeNode, T data){
    if(treeNode==NULL){
        BNode<T>* treod = new BNode(data);
        _root = treod;
        return;
    }
    else{
        if(treeNode->key>data){
            if(treeNode->left==NULL){
                BNode<T>* treod = new BNode(data);
                treeNode->left=treod;
            }
            else{
                insert(treeNode->left,data);
            }
        }
        else{
            if(treeNode->right==NULL){
                BNode<T>* treod = new BNode(data);
                treeNode->right=treod;
            }
            else{
                insert(treeNode->right,data);
            }
        }
    }
}

template <typename T>
BNode<T>* BST<T>::getSuccessor(BNode<T>* node){
    node=node->right;
    while(node!=NULL && node->left!=NULL){
        node=node->left;
    }
    return node;
}

template <typename T>
BNode<T>* BST<T>::remove(BNode<T>* node,T data){
    if(node==NULL){
        return node;
    }
    if(node->key<data){
        node->right=remove(node->right,data);
    }
    else if ( node->key>data){
        node->left=remove(node->left,data);
    }
    else{
        if(node->left==NULL){
            BNode<T>* temp=node->right;
            delete node;
            return temp;
        }
        else if (node->right==NULL){
            BNode<T>* temp=node->left;
            delete node;
            return temp;
        }
        else{
            BNode<T>* sucsr=getSuccessor(node);
            node->key=sucsr->key;
            node->right=remove(node->right,sucsr->key);
        }
    }
    return node;
}

template <typename T>
int BST<T>::getHeight(BNode<T>* treeNode){
    if(treeNode==NULL){
        return 0;
    }
    return max(getHeight(treeNode->left),getHeight(treeNode->right))+1;
}

template <typename T>
BNode<T>* BST<T>::floor(BNode<T>* node, T data){
    BNode<T>* res=NULL;
    while(node!=NULL){
        if(node->key==data){
            return node;
        }
        else if(node->key>data){
            node=node->left;
        }
        else{
            res=node;
            node=node->right;
        }
    }
    return res;
}

template <typename T>
BNode<T>* BST<T>::ceil(BNode<T>* node, T data){
    BNode<T>* res=NULL;
    while(node!=NULL){
        if(node->key==data){
            return node;
        }
        else if(node->key>data){
            res=node;
            node=node->left;
        }
        else{
            node=node->right;
        }
    }
    return res;
}

template <typename T>
void BST<T>::inOrder(BNode<T>* node){
    if(node==NULL){
        return ;
    }
    inOrder(node->left);
    cout<<node->key<<" ";
    inOrder(node->right);
}

template <typename T>
void BST<T>::preOrder(BNode<T>* node){
    if(node==NULL){
        return ;
    }
    cout<<node->key<<" ";
    preOrder(node->left);
    preOrder(node->right);
}

template <typename T>
void BST<T>::postOrder(BNode<T>* node){
    if(node==NULL){
        return ;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->key<<" ";
}

template <typename T>
void BST<T>::levelOrder(BNode<T>* node){
    Queue<BNode<T>*> q;
    q.enque(node);
    while(q.isEmpty()==false){
        int n=q.size();
        for( int i=0;i<n;i++){
            BNode<T>* temp=q.front();
            q.deque();
            cout<<temp->key<<" ";
            if(temp->left!=NULL){q.enque(temp->left);}
            if(temp->right!=NULL){q.enque(temp->right);}
        }
        cout<<endl;
    }
}

template <typename T>
int BST<T>::getSize(BNode<T>* node){
    if(node==NULL){
        return 0;
    }
    return (getSize(node->left)+getSize(node->right))+1;
}


template<typename T>
class MinHeap {
public:
    vector<T> heap;

    // Helper functions
    void heapifyUp(int index) {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[index] < heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int smallest = index;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
            smallest = leftChild;
        }
        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }


    MinHeap() {}

    void insert(T value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    T extractMin() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty.");
        }

        T minValue = heap[0];
        swap(heap[0], heap[heap.size() - 1]);
        heap.pop_back();
        heapifyDown(0);

        return minValue;
    }

    bool isEmpty() const {
        return heap.empty();
    }
};


template<typename T>
class MaxHeap {
private:
    vector<T> heap;

    void heapify(int i) {
        int n = heap.size();
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && heap[left] > heap[largest])
            largest = left;

        if (right < n && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapify(largest);
        }
    }

public:
    MaxHeap() {}

    void insert(T data) {
        heap.push_back(data);
        int i = heap.size() - 1;

        while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    T remove() {
        if (heap.empty()) {
            cout << "Heap is empty. Cannot remove element." << endl;
            return 0;
        }
        T temp=heap[0];
        swap(heap[0], heap[heap.size() - 1]);
        heap.pop_back();
        heapify(0);
        return temp;
    }

    void display() {
        for (T val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};




#endif  // DS_H
