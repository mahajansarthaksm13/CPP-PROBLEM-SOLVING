// Neon: digit sum of n^2 == n. Input: n, then range L R
#include <iostream>
using namespace std;
bool neon(long long n) { long long s = 0; for (long long t = n * n; t; t /= 10) s += t % 10; return s == n; }
int main() {
    long long n, l, r;
    cin >> n >> l >> r;
    cout << n << (neon(n) ? " is Neon\n" : " is Not Neon\n");
    for (long long i = l; i <= r; i++) if (neon(i)) cout << i << ' ';
    cout << '\n';
}
