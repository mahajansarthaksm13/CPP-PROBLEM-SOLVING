// Copy set bits of y in positions [l, r] (1-based from LSB) into x
#include <iostream>
using namespace std;
int main() {
    unsigned x, y; int l, r;
    cin >> x >> y >> l >> r;
    unsigned mask = ((r - l + 1 == 32) ? ~0u : ((1u << (r - l + 1)) - 1)) << (l - 1);
    x |= y & mask;
    cout << x << '\n';
}
