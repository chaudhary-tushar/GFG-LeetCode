def zerosum(arr):
    pre = [arr[0]]
    for i in range(1, len(arr)):
        pre.append(pre[i-1] + arr[i])

    s = set()
    for item in pre:
        if item in s:
            print("YES")
            return
        else:
            s.add(item)

    print("NO")

arr = [1, 4, 13, -3, -10, 5]
zerosum(arr)
