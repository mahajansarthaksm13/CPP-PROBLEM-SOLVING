// CBSPEED - prone to errors if Y > X
#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << (y > x ? "YES" : "NO") << '\n';
    }
}
