// Weighted job scheduling: sort by end, DP + binary search, O(n log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Job { long long s, e, p; };
int main() {
    int n;
    cin >> n;
    vector<Job> j(n);
    for (auto& x : j) cin >> x.s >> x.e >> x.p;
    sort(j.begin(), j.end(), [](const Job& a, const Job& b) { return a.e < b.e; });
    vector<long long> ends(n), dp(n + 1, 0);
    for (int i = 0; i < n; i++) ends[i] = j[i].e;
    for (int i = 0; i < n; i++) {
        int k = upper_bound(ends.begin(), ends.begin() + i, j[i].s) - ends.begin();  // last job ending <= start
        dp[i + 1] = max(dp[i], dp[k] + j[i].p);
    }
    cout << dp[n] << '\n';
}
