// TALLER - who is taller
#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << (x > y ? "Alice" : "Bob") << '\n';
    }
}
