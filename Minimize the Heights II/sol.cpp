class Solution {
  public:
        int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);  
        int min2 = arr[0];
        int max2 = arr[n-1];
        int diff = max2 - min2;
        
        for(int i=1; i<n; i++){
            if(arr[i]-k <= 0){
                continue;
            }
            
            min2 = min(arr[0] + k, arr[i] - k);
            max2 = max(arr[n-1]-k, arr[i-1]+k);
            diff = min(diff, max2-min2);
        }
        
        return diff;
    }
    
};
