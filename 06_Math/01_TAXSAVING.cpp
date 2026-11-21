// TAXSAVING - invest X-Y so taxable income drops to Y
#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << x - y << '\n';
    }
}
