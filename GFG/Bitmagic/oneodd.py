def oddone(arr):
    odd=0
    for i in range(len(arr)):
        odd = odd^arr[i]
    return odd

numbers=[1,2,3,4,5,6,7,8,9,7,4,1,8,5,2,6,3]
print(oddone(numbers))    
    