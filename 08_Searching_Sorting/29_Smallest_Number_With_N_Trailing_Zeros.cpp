// Smallest x with at least n trailing zeros in x!: binary search on x, O(log^2)
#include <iostream>
using namespace std;
long long zeros(long long x) { long long z = 0; for (long long p = 5; p <= x; p *= 5) z += x / p; return z; }
int main() {
    long long n;
    cin >> n;
    long long lo = 0, hi = 5 * n;
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (zeros(mid) >= n) hi = mid; else lo = mid + 1;
    }
    cout << lo << '\n';
}
