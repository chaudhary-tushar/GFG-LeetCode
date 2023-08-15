def zerosum(arr,sm):
    pre = [arr[0]]
    for i in range(1, len(arr)):
        pre.append(pre[i-1] + arr[i])

    s = set()
    for item in pre:
        if item-sm in s:
            print("YES")
            return
        else:
            s.add(item)

    print("NO")

arr = [5,8,6,13,3,-1]
zerosum(arr,22)
