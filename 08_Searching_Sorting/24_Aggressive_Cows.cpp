// Aggressive cows: binary search on minimum distance, O(n log(range))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, c;
    cin >> n >> c;
    vector<long long> x(n);
    for (auto& v : x) cin >> v;
    sort(x.begin(), x.end());
    auto canPlace = [&](long long d) {
        int cnt = 1; long long last = x[0];
        for (int i = 1; i < n; i++) if (x[i] - last >= d) { cnt++; last = x[i]; }
        return cnt >= c;
    };
    long long lo = 1, hi = x[n-1] - x[0];
    while (lo < hi) {
        long long mid = (lo + hi + 1) / 2;
        if (canPlace(mid)) lo = mid; else hi = mid - 1;
    }
    cout << lo << '\n';
}
