// Total set bits in 1..N, per-bit counting O(log N)
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long total = 0;
    for (long long bit = 1; bit <= n; bit <<= 1) {
        long long period = bit << 1;
        total += (n + 1) / period * bit + max(0LL, (n + 1) % period - bit);
    }
    cout << total << '\n';
}
