// Leading zeros, trailing zeros, and set bits of a 32-bit number
#include <iostream>
using namespace std;
int main() {
    unsigned n;
    cin >> n;
    int lead = n ? __builtin_clz(n) : 32;
    int trail = n ? __builtin_ctz(n) : 32;
    cout << "Leading zeros: " << lead << "\nTrailing zeros: " << trail
         << "\nOnes: " << __builtin_popcount(n) << '\n';
}
