class Solution:
    def minJumps(self, arr, n):
        if arr[0] == 0:
            return -1
        if n == 1:
            return 0
        
        maxReach = arr[0]
        steps = arr[0]
        jumps = 1
        
        for i in range(1, n):
            maxReach = max(maxReach, i + arr[i])
            steps -= 1
            
            if i == n - 1:
                return jumps
            
            if steps == 0:
                jumps += 1
                
                if i >= maxReach:
                    return -1
                
                steps = maxReach - i
        
        return -1
