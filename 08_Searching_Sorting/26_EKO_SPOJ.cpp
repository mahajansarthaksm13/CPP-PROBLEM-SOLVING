// EKO: max sawblade height H with at least M wood collected, binary search O(n log(maxH))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; long long m;
    cin >> n >> m;
    vector<long long> h(n);
    for (auto& v : h) cin >> v;
    long long lo = 0, hi = *max_element(h.begin(), h.end());
    while (lo < hi) {
        long long mid = (lo + hi + 1) / 2, wood = 0;
        for (auto v : h) if (v > mid) wood += v - mid;
        if (wood >= m) lo = mid; else hi = mid - 1;
    }
    cout << lo << '\n';
}
