// Invert all bits up to MSB: n ^ (2^(bits) - 1)
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    if (n == 0) { cout << "1\n"; return 0; }
    int bits = 64 - __builtin_clzll(n);
    unsigned long long mask = bits == 64 ? ~0ULL : (1ULL << bits) - 1;
    cout << (n ^ mask) << '\n';
}
