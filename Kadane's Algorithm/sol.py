# Initializing max and sum variables
        max_sum = float('-inf')
        current_sum = 0
        
        # Loop through the array
        for i in range(N):
            # Add the current element to the current sum
            current_sum = current_sum + arr[i]
            
            # Update max_sum if the current sum is greater
            max_sum = max(current_sum, max_sum)
            
            # Reset current_sum to 0 if it becomes negative
            if current_sum < 0:
                current_sum = 0
        
        # Return the maximum sum
        return max_sum
