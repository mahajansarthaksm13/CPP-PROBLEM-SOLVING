// Most significant set bit value and position (0-based), O(1) with clz
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    if (n == 0) { cout << "0\n"; return 0; }
    int pos = 63 - __builtin_clzll(n);
    cout << "MSB value: " << (1ULL << pos) << "\nPosition: " << pos << '\n';
}
