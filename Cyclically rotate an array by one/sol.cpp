void rotate(int arr[], int n)
{
    for(int i=n-1; i>0; i--){  // O(n) O(1)
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
}
