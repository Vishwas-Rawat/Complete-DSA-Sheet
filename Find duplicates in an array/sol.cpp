class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int> al;
        for(int i=0; i<n; i++){
            arr[arr[i] % n] = arr[arr[i] % n] + n;
        }
        
        for(int i=0; i<n; i++){
            if((arr[i]/n > 1)){
                al.push_back(i);
            }
        }
        
        if(al.size() < 1){
            al.push_back(-1);
            return al;
        }
        
        return al;
    }
};
