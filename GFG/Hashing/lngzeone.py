def findMaxLength(nums):
    count = 0
    max_length = 0
    hash_map = {0: -1}

    for i in range(len(nums)):
        if nums[i] == 0:
            count -= 1
        else:
            count += 1

        if count in hash_map:
            max_length = max(max_length, i - hash_map[count])
        else:
            hash_map[count] = i

    return max_length


nums = [0, 1, 0, 1, 1, 0, 0]
result = findMaxLength(nums)
print("Longest subarray length:", result)
