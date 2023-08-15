def kadane_algorithm(arr):
    current_sum = arr[0]
    max_sum = arr[0]

    for i in range(1, len(arr)):
        current_sum = max(arr[i], current_sum + arr[i])
        max_sum = max(max_sum, current_sum)

    return max_sum

def max_circular_subarray_sum(arr):
    n = len(arr)

    # Case 1: Maximum subarray sum using standard Kadane's algorithm
    max_normal_sum = kadane_algorithm(arr)

    # Case 2: Maximum subarray sum with wrapping (circular) elements
    total_sum = sum(arr)
    for i in range(n):
        arr[i] = -arr[i]

    max_circular_sum = total_sum + kadane_algorithm(arr)

    # Return the maximum of the two cases
    return max(max_normal_sum, max_circular_sum)

arr = [5, -2, 3, 4]
max_sum = max_circular_subarray_sum(arr)
print("Maximum circular subarray sum:", max_sum)
