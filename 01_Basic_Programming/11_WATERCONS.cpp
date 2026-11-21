// WATERCONS - at least 2000 ml
#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << (x >= 2000 ? "YES" : "NO") << '\n';
    }
}
