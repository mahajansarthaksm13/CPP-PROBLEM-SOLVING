// AUDIBLE - 67 <= X <= 45000
#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << (x >= 67 && x <= 45000 ? "YES" : "NO") << '\n';
    }
}
