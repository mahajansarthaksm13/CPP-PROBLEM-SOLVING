// Is s a valid shuffle (interleaving) of a and b, preserving order? DP O(n*m)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string a, b, s;
    cin >> a >> b >> s;
    int n = a.size(), m = b.size();
    if (n + m != (int)s.size()) { cout << "No\n"; return 0; }
    vector<bool> dp(m + 1, false);   // dp[j]: first i chars of a and j of b form s[0..i+j)
    dp[0] = true;
    for (int j = 1; j <= m; j++) dp[j] = dp[j - 1] && b[j - 1] == s[j - 1];
    for (int i = 1; i <= n; i++) {
        dp[0] = dp[0] && a[i - 1] == s[i - 1];
        for (int j = 1; j <= m; j++)
            dp[j] = (dp[j] && a[i - 1] == s[i + j - 1]) || (dp[j - 1] && b[j - 1] == s[i + j - 1]);
    }
    cout << (dp[m] ? "Yes" : "No") << '\n';
}
