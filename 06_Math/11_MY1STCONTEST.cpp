// MY1STCONTEST - rated = N-A, rated above 1000 = N-A-B
#include <iostream>
using namespace std;
int main() {
    int t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        cout << n - a << ' ' << n - a - b << '\n';
    }
}
