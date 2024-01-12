class Solution:
    def duplicates(self, arr, n): 
        al = []

        # Modification in the input array
        for i in range(n):
            arr[arr[i] % n] = arr[arr[i] % n] + n

        # Finding the duplicates
        for i in range(n):
            if arr[i] // n > 1:
                al.append(i)

        # Handling the case when no duplicates are found
        if not al:
            al.append(-1)

        return al
            
