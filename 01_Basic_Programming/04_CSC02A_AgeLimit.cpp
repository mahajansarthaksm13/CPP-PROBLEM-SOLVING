// CSC02A / AGELIMIT - eligible if X <= A < Y
#include <iostream>
using namespace std;
int main() {
    int t, x, y, a;
    cin >> t;
    while (t--) {
        cin >> x >> y >> a;
        cout << (a >= x && a < y ? "YES" : "NO") << '\n';
    }
}
