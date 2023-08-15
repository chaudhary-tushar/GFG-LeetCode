def longest_subarray_with_sum(arr, target_sum):
    sum_map = {}
    max_length = 0
    curr_sum = 0

    for i in range(len(arr)):
        curr_sum += arr[i]

        if curr_sum == target_sum:
            max_length = i + 1

        if curr_sum - target_sum in sum_map:
            max_length = max(max_length, i - sum_map[curr_sum - target_sum])

        if curr_sum not in sum_map:
            sum_map[curr_sum] = i

    return max_length


arr = [5,8,-4,-4,9,2,-2]
target_sum = 0
result = longest_subarray_with_sum(arr, target_sum)
print("Longest subarray length:", result)
