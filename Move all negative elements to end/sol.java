class Solution {
    
    public void segregateElements(int arr[], int n)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0; i<n; i++){
            if(arr[i] > 0){
                ans.add(arr[i]);
            }
        }
        
        for(int j=0; j<n; j++){
            if(arr[j] < 0){
                ans.add(arr[j]);
            }
        }
        
        for(int i=0; i<n; i++){
            arr[i] = ans.get(i);
        }
    }
}
