// Method 1
def getMinMax( a, n):
    a.sort()
    return a[0], a[-1]




// Method 2
def getMinMax( a, n):
    
    
    ans1 = float('inf')  # Initialize ans1 to positive infinity
    ans2 = float('-inf')  # Initialize ans2 to negative infinity

    for i in range(n):
        ans1 = min(ans1, a[i])  # Update ans1 with the minimum value
        ans2 = max(ans2, a[i])  # Update ans2 with the maximum value

    return (ans1, ans2)
