// BESTOFTWO - max(X, Y)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << max(x, y) << '\n';
    }
}
