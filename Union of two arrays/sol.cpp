class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> hs; // n + m
        for(int i=0; i<n; i++){ // O(n)
            hs.insert(a[i]);
        }
        
        for(int i=0; i<m; i++){  // O(m)
            hs.insert(b[i]);
        }
        
        return hs.size();
    }
};
