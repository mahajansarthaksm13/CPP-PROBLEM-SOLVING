// Swap with XOR, no temporary
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if (x != y) { x ^= y; y ^= x; x ^= y; }
    cout << x << ' ' << y << '\n';
}
