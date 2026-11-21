// Painter's partition: K painters, contiguous boards, minimize max work: binary search O(n log(sum))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto& v : a) cin >> v;
    auto feasible = [&](long long cap) {
        int painters = 1; long long cur = 0;
        for (auto v : a) {
            if (cur + v > cap) { painters++; cur = 0; }
            cur += v;
        }
        return painters <= k;
    };
    long long lo = *max_element(a.begin(), a.end()), hi = 0;
    for (auto v : a) hi += v;
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (feasible(mid)) hi = mid; else lo = mid + 1;
    }
    cout << lo << '\n';
}
