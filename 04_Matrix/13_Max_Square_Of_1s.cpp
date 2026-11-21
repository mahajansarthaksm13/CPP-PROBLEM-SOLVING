// Largest all-1 square sub-matrix, DP O(n*m) with one row of extra space
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> dp(m + 1, 0);
    int best = 0;
    for (int i = 1; i <= n; i++) {
        int prevDiag = 0;
        for (int j = 1, x; j <= m; j++) {
            cin >> x;
            int tmp = dp[j];
            dp[j] = x ? min({dp[j], dp[j - 1], prevDiag}) + 1 : 0;
            best = max(best, dp[j]);
            prevDiag = tmp;
        }
    }
    cout << best << '\n';
}
