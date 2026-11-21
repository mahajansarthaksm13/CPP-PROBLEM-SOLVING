// GDTURN - Good Turn: YES if X+Y > 6
#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << (x + y > 6 ? "YES" : "NO") << '\n';
    }
}
