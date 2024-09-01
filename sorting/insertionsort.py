def insertionsort(arr):
    n=len(arr)
    for j in range(1, n):
        key=arr[j]
        i = j-1
        while i>=0 and key<arr[i]:
            arr[i+1]=arr[i]
            i=i-1
        arr[i+1]=key
            
arr=[10,9,11,6,15,2]
insertionsort(arr)
print(arr)