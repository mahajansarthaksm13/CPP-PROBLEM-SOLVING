// PRIZEPOOL - 10*X + 90*Y
#include <iostream>
using namespace std;
int main() {
    int t; long long x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << 10 * x + 90 * y << '\n';
    }
}
