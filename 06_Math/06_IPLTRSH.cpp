// IPLTRSH - students without tickets = max(0, N-M)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << max(0, n - m) << '\n';
    }
}
