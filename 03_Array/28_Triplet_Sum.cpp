// Triplet with sum X: sort + two pointers, O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; long long X;
    cin >> n >> X;
    vector<long long> a(n);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    for (int i = 0; i + 2 < n; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            long long s = a[i] + a[l] + a[r];
            if (s == X) { cout << a[i] << ' ' << a[l] << ' ' << a[r] << '\n'; return 0; }
            s < X ? l++ : r--;
        }
    }
    cout << "-1\n";
}
