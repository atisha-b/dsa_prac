def bubblesort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if(arr[j]> arr[j+1]):
                arr[j], arr[j+1]=arr[j+1],arr[j]
            

arr= [10,9,11,6,15,2]
bubblesort(arr)
print(arr)
            