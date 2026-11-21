// LUDO - new token only on a 6
#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << (x == 6 ? "YES" : "NO") << '\n';
    }
}
