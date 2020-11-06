# Bubble sort in python

def bubblesort(arr):
    n = len(arr)

    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

arr=[12,24,45,15,32,99,202]
bubblesort(arr)

print('sorted array : ', arr)
