def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = arr[:mid]
    right_half = arr[mid:]

    # Recursively sort the two halves
    left_half = merge_sort(left_half)
    right_half = merge_sort(right_half)

    # Merge the sorted halves
    merged = merge(left_half, right_half)
    return merged

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two sorted arrays
    while left_index < len(left) and right_index < len(right):
        if left[left_index] <= right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # Append the remaining elements
    merged.extend(left[left_index:])
    merged.extend(right[right_index:])
    
    return merged

    

arr=[5,10,10,13,8,9,14,34,7,7,19,99]
print(len(arr))
print(merge_sort(arr))
print(arr)