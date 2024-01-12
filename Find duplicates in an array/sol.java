class Solution {
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        ArrayList<Integer> al = new ArrayList<>();
        for(int i=0; i<n; i++){
            arr[arr[i] % n] = arr[arr[i] % n] + n;
        }
        
        
        for(int i=0; i<n; i++){
            if((arr[i]/n > 1)){
                al.add(i);
            }
        }
        
        if(al.size() < 1){
            al.add(-1);
            return al;
        }
        
        return al;
    }
}
