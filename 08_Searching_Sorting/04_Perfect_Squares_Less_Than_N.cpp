// Count perfect squares < N = floor(sqrt(N-1)), O(log N) via integer binary search
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long lo = 0, hi = 2000000000LL;  // largest k with k*k <= n-1
    while (lo < hi) {
        long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= n - 1) lo = mid; else hi = mid - 1;
    }
    cout << lo << '\n';
}
