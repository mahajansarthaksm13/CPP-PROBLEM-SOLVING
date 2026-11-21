// CBSPEED - prone to errors if Y > X (single line of input)
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    cout << (y > x ? "YES" : "NO") << '\n';
}
