class Solution {
  public:
    int solveWordWrap(vector<int> arr, int k) {
        int n = arr.size();
        const long long INF = LLONG_MAX / 4;
        vector<long long> dp(n + 1, INF);
        dp[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            long long len = -1;
            for (int j = i; j < n; j++) {
                len += arr[j] + 1;
                if (len > k) break;
                long long cost = (j == n - 1) ? 0 : (k - len) * (k - len) + dp[j + 1];
                dp[i] = min(dp[i], cost);
            }
        }
        return (int)dp[0];
    }
};
