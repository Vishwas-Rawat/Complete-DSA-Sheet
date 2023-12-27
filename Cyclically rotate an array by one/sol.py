def rotate( arr, n):
    for i in range(len(arr)-1, 0, -1):
            temp = arr[i]
            arr[i] = arr[i-1]
            arr[i-1] = temp
