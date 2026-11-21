class Solution {
  public:
    int countPS(string &s) {
        const long long MOD = 1000000007LL;
        int n = s.size();
        if (n == 0) return 0;
        vector<vector<long long>> dp(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) dp[i][i] = 1;
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;
                if (s[i] == s[j]) dp[i][j] = (dp[i+1][j] + dp[i][j-1] + 1) % MOD;
                else dp[i][j] = ((dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1]) % MOD + MOD) % MOD;
            }
        }
        return (int)dp[0][n-1];
    }
};
