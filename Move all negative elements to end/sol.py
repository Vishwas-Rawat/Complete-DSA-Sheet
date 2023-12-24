class Solution:
    def segregateElements(self, arr, n):
        ans = []
        
        # Add positive elements to the list
        for i in range(n):
            if arr[i] > 0:
                ans.append(arr[i])
        
        # Add negative elements to the list
        for j in range(n):
            if arr[j] < 0:
                ans.append(arr[j])
        
        # Update the original array with the elements from the list
        for i in range(n):
            arr[i] = ans[i]
