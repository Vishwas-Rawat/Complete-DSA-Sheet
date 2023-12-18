// Method 1
pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a, a+n);
    pair<int,int> p(a[0], a[n-1]);
    return p;
}


// Method 2
pair<long long, long long> getMinMax(long long a[], int n) {
    long long ans1 = LLONG_MAX; // Initialize ans1 to the maximum possible long long value
    long long ans2 = LLONG_MIN; // Initialize ans2 to the minimum possible long long value

    for (int i = 0; i < n; i++) {
        ans1 = min(ans1, a[i]); // Update ans1 with the minimum value
        ans2 = max(ans2, a[i]); // Update ans2 with the maximum value
    }

    return make_pair(ans1, ans2);
}
