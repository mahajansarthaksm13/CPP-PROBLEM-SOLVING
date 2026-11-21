// Maximum product subarray, track max/min ending here, O(n)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; long long x;
    cin >> n >> x;
    long long mx = x, mn = x, best = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < 0) swap(mx, mn);
        mx = max(x, mx * x);
        mn = min(x, mn * x);
        best = max(best, mx);
    }
    cout << best << '\n';
}
