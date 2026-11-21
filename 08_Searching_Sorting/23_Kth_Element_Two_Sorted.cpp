// Kth element of two sorted arrays, binary search on partition, O(log(min(n,m)))
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& v : a) cin >> v;
    for (int& v : b) cin >> v;
    cin >> k;
    if (n > m) { swap(a, b); swap(n, m); }
    int lo = max(0, k - m), hi = min(k, n);
    while (lo <= hi) {
        int i = (lo + hi) / 2, j = k - i;   // take i from a, j from b
        int aLeft = i ? a[i-1] : INT_MIN, aRight = i < n ? a[i] : INT_MAX;
        int bLeft = j ? b[j-1] : INT_MIN, bRight = j < m ? b[j] : INT_MAX;
        if (aLeft <= bRight && bLeft <= aRight) { cout << max(aLeft, bLeft) << '\n'; return 0; }
        if (aLeft > bRight) hi = i - 1; else lo = i + 1;
    }
}
