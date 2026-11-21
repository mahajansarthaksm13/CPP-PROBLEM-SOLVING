// CHAIRS_ - new chairs needed = max(0, X - Y)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << max(0, x - y) << '\n';
    }
}
