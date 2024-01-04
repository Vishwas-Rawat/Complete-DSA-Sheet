class Solution{
    static int minJumps(int[] arr){
        
        if(arr[0] == 0){
            return -1;
        }
        if(arr.length==1){
            return 0;
        }
        
        int maxReach = arr[0];
        int steps = arr[0];
        int jumps = 1;
        
        for(int i=1; i<arr.length; i++){
            maxReach = Math.max(maxReach, i + arr[i]);
            steps--;
            if(i==arr.length-1){
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
}
