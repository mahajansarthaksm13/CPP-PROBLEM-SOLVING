// Best time to buy and sell once, O(n)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, p;
    cin >> n;
    int minPrice = 1e9, best = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        best = max(best, p - minPrice);
        minPrice = min(minPrice, p);
    }
    cout << best << '\n';
}
