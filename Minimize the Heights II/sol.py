class Solution:
    def getMinDiff(self, arr, n, k):
        arr.sort()
        minimum = arr[0]
        maximum = arr[n - 1]
        diff = maximum - minimum

        for i in range(1, n):
            if arr[i] - k <= 0:
                continue
            
            new_min = min(arr[0] + k, arr[i] - k)
            new_max = max(arr[n - 1] - k, arr[i - 1] + k)
            diff = min(diff, new_max - new_min)

        return diff
