def bubbleSort(arr):
    n=len(arr)
    
    for i in range(n):
        swapped = False
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if (swapped == False):
            break

arr = input()
user_array = [int(element) for element in arr.split()]
bubbleSort(user_array)
for i in range(len(user_array)):
    print("%d" % user_array[i], end=" ")