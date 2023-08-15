def union(arr,brr):
    q=set(arr)
    for i in brr:
        q.add(i)
    return (len(q))

arr=[1,2,3,4,5,6,7,8,9]
brr=[1,3,5,7,9,11,13,15]
print(union(arr,brr))