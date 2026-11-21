// DETSCORE - each of 10 test cases worth X/10; passed N
#include <iostream>
using namespace std;
int main() {
    int t, x, n;
    cin >> t;
    while (t--) {
        cin >> x >> n;
        cout << x / 10 * n << '\n';
    }
}
