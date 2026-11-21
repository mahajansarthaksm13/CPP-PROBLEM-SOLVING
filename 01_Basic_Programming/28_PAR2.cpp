// PAR2 - even split possible if N even
#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (n % 2 == 0 ? "YES" : "NO") << '\n';
    }
}
