// Max profit with at most two transactions, O(n) time O(1) space
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, p;
    cin >> n;
    long long buy1 = -1e18, sell1 = 0, buy2 = -1e18, sell2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        buy1 = max(buy1, (long long)-p);
        sell1 = max(sell1, buy1 + p);
        buy2 = max(buy2, sell1 - p);
        sell2 = max(sell2, buy2 + p);
    }
    cout << sell2 << '\n';
}
