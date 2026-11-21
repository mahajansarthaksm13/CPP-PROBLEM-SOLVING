// Minimize max-min after +-K on each tower, O(n log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    sort(a.begin(), a.end());
    int ans = a[n - 1] - a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] - k < 0) continue;
        int mn = min(a[0] + k, a[i] - k);
        int mx = max(a[i - 1] + k, a[n - 1] - k);
        ans = min(ans, mx - mn);
    }
    cout << ans << '\n';
}
