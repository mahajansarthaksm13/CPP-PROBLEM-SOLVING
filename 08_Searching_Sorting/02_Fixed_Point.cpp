// Elements equal to their 1-based index, O(n)
#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    bool any = false;
    for (int i = 1; i <= n; i++) { cin >> x; if (x == i) { cout << x << ' '; any = true; } }
    cout << (any ? "" : "Not Found") << '\n';
}
