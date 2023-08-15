#  given an array 0of n integers and a number k find the maximum sum of k consecutive integers

def slide(arr,k):
    n=len(arr)
    i=0
    maxq=0
    while(i<k):
        print(arr[i])
        maxq+=arr[i]
        i+=1
    res=maxq
    j=0
    while(i<n and j<n-k):
        maxq=maxq+arr[i]-arr[j]
        i+=1
        j+=1
        res=max(maxq,res)
    return res
        
        
        
    
    
    
# arr=[1,8,30,-5,20,7]
# k=3
arr=[5,-10,6,90,3]
k=2

print(slide(arr,k))