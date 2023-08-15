def bucketSort(arr):
    n = len(arr)
    buckets = [[] for _ in range(n)]

    for num in arr:
        index = int(n * num)
        buckets[index].append(num)

    for bucket in buckets:
        bucket.sort()

    index = 0
    for bucket in buckets:
        for num in bucket:
            arr[index] = num
            index += 1


arr = [0.1, 0.7, 0.4, 0.3, 0.6, 0.9, 0.2, 0.5, 0.8]
bucketSort(arr)

print("Sorted array:", arr)
