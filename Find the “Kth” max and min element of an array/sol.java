class Solution{
    public static int kthSmallest(int[] arr, int l, int r, int k) 
    { 
        int ans = 0;
        Arrays.sort(arr);
        for(int i=0; i<k; i++){
            ans = arr[i];
        }
        return ans;
    } 
}
