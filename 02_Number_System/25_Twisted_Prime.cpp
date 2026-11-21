// Twisted prime: n and reverse(n) both prime
#include <iostream>
using namespace std;
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
int main() {
    long long n, r = 0;
    cin >> n;
    for (long long t = n; t > 0; t /= 10) r = r * 10 + t % 10;
    cout << (isPrime(n) && isPrime(r) ? "Twisted Prime" : "Not Twisted Prime") << '\n';
}
