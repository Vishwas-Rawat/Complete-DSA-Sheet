class Solution {
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        std::sort(arr + l, arr + r + 1);

        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans = arr[l + i];
        }

        return ans;
    }
};
