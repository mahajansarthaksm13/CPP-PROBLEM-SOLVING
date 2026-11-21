// Circular prime: every digit rotation is prime
#include <iostream>
using namespace std;
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
int main() {
    long long n, d = 0, p = 1;
    cin >> n;
    for (long long t = n; t; t /= 10, d++) if (t >= 10) p *= 10;  // p = 10^(digits-1)
    bool ok = true;
    long long r = n;
    for (int i = 0; i < d && ok; i++) {
        ok = isPrime(r);
        r = (r % 10) * p + r / 10;  // rotate right
    }
    cout << (ok ? "Circular Prime" : "Not Circular Prime") << '\n';
}
