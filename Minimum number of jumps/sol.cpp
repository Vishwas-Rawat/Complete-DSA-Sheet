class Solution{
  public:
    int minJumps(int arr[], int n){
        if(arr[0] == 0){
            return -1;
        }
        if(n==1){
            return 0;
        }
        
        int maxReach = arr[0];
        int steps = arr[0];
        int jumps = 1;
        
        for(int i=1; i<n; i++){
            maxReach = max(maxReach, i + arr[i]);
            steps--;
            if(i==n-1){
                return jumps;
            }
            
            if(steps==0){
                jumps++;
                
                if(i>=maxReach){
                    return -1;
                }
                
                steps = maxReach - i;
            }
            
        }
        
        return -1;
        }
    
};
