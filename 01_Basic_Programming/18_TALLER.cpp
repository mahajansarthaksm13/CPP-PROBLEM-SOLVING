// TALLER - print A if Alice is taller, otherwise B
#include <iostream>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << (x > y ? 'A' : 'B') << '\n';
    }
}
