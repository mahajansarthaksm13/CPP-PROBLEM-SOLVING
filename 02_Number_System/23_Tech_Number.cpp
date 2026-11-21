// Tech: even digits, (left half + right half)^2 == n
#include <iostream>
using namespace std;
int main() {
    long long n, d = 0, p = 1;
    cin >> n;
    for (long long t = n; t; t /= 10) d++;
    if (d % 2) { cout << "Not Tech\n"; return 0; }
    for (int i = 0; i < d / 2; i++) p *= 10;
    long long s = n / p + n % p;
    cout << (s * s == n ? "Tech" : "Not Tech") << '\n';
}
