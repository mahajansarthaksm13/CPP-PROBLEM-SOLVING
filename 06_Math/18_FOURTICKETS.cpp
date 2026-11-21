// FOURTICKETS - go if 4*X <= 1000
#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << (4 * x <= 1000 ? "YES" : "NO") << '\n';
    }
}
