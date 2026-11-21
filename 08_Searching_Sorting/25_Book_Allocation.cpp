// Allocate books to M students minimizing max pages: binary search on answer, O(n log(sum))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    vector<long long> a(n);
    for (auto& v : a) cin >> v;
    cin >> m;
    if (m > n) { cout << -1 << '\n'; return 0; }
    auto feasible = [&](long long cap) {
        int students = 1; long long cur = 0;
        for (auto v : a) {
            if (cur + v > cap) { students++; cur = 0; }
            cur += v;
        }
        return students <= m;
    };
    long long lo = *max_element(a.begin(), a.end()), hi = 0;
    for (auto v : a) hi += v;
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (feasible(mid)) hi = mid; else lo = mid + 1;
    }
    cout << lo << '\n';
}
