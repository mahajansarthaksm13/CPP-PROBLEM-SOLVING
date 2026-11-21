// Word wrap: minimize sum of (extra spaces)^2 per line (last line free), DP O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector<int> w(n);
    for (int& x : w) cin >> x;
    cin >> k;
    const long long INF = 1e18;
    vector<long long> dp(n + 1, INF);  // dp[i] = min cost for words i..n-1
    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
        int len = -1;  // spaces between words counted
        for (int j = i; j < n; j++) {
            len += w[j] + 1;
            if (len > k) break;
            long long cost = (j == n - 1) ? 0 : (long long)(k - len) * (k - len);
            if (dp[j + 1] < INF) dp[i] = min(dp[i], cost + dp[j + 1]);
        }
    }
    cout << dp[0] << '\n';
}
