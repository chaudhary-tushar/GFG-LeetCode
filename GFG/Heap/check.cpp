#include <iostream>
#include "../ds.h"

int main() {
    // Create a MaxHeap object
    MaxHeap<int> maxHeap;

    // Insert elements into the heap
    maxHeap.insert(4);
    maxHeap.insert(10);
    maxHeap.insert(3);
    maxHeap.insert(5);
    maxHeap.insert(1);

    // Display the heap
    std::cout << "Heap elements: ";
    maxHeap.display();  // Output: 10 5 3 4 1

    // Remove the maximum element
    maxHeap.remove();

    // Display the heap after removal
    std::cout << "Heap elements after removal: ";
    maxHeap.display();  // Output: 5 4 3 1

    return 0;
}
