class Solution:
    def kthSmallest(self,arr, l, r, k):
        arr[l:r+1] = sorted(arr[l:r+1])

        ans = 0
        for i in range(k):
            ans = arr[l + i]

        return ans
