// Kth smallest over union of integer ranges: merge intervals, then walk, O(N log N + Q*N)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<pair<long long,long long>> r(n);
        for (auto& p : r) cin >> p.first >> p.second;
        sort(r.begin(), r.end());
        vector<pair<long long,long long>> mg;
        for (auto& p : r) {
            if (!mg.empty() && p.first <= mg.back().second + 1) mg.back().second = max(mg.back().second, p.second);
            else mg.push_back(p);
        }
        while (q--) {
            long long k;
            cin >> k;
            long long ans = -1;
            for (auto& p : mg) {
                long long len = p.second - p.first + 1;
                if (k <= len) { ans = p.first + k - 1; break; }
                k -= len;
            }
            cout << ans << '\n';
        }
    }
}
