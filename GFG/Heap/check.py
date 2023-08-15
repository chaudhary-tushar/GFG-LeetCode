from ds import MaxHeap

# Create a MaxHeap object
max_heap = MaxHeap()

# Insert elements into the heap
max_heap.insert(4)
max_heap.insert(10)
max_heap.insert(3)
max_heap.insert(5)
max_heap.insert(1)

# Display the heap
print("Heap elements:", max_heap.get_heap())  # Output: [10, 5, 3, 4, 1]

# Remove the maximum element
max_heap.extract_max()

# Display the heap after removal
print("Heap elements after removal:", max_heap.get_heap())  # Output: [5, 4, 3, 1]
