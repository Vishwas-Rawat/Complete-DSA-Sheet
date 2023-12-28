class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long max2 = LONG_MIN;
        long sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            max2 = max(sum, max2);
            if(sum<0){
                sum = 0;
            }
        }
        return max2;
        
    }
};
