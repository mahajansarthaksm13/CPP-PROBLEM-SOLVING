// TIMELY - on time if left >= 30 minutes early
#include <iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << (x >= 30 ? "YES" : "NO") << '\n';
    }
}
