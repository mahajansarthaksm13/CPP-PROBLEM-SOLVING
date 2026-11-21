// Count palindromic subsequences (not necessarily distinct), DP O(n^2)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    const long long MOD = 1000000007LL;
    vector<vector<long long>> dp(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) dp[i][i] = 1;
    for (int len = 2; len <= n; len++)
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            dp[i][j] = (dp[i+1][j] + dp[i][j-1] + MOD) % MOD;
            dp[i][j] = s[i] == s[j] ? (dp[i][j] + 1) % MOD : (dp[i][j] - dp[i+1][j-1] + MOD) % MOD;
        }
    cout << dp[0][n-1] << '\n';
}
