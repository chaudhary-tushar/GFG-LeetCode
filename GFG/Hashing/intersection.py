def intersect(arr,brr):
    n=len(arr)
    m=len(brr)
    q=set(arr)
    b=set(brr)

    return sum(1 for i in q if i in b)

arr=[1,2,3,4,5,6,7,8,9]
brr=[1,3,5,7,9,11,13,15]
print(intersect(arr,brr))
