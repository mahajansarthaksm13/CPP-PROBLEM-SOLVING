// Sort descending by set-bit count, stable for ties, O(n log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& v : a) cin >> v;
    stable_sort(a.begin(), a.end(), [](int x, int y) { return __builtin_popcount(x) > __builtin_popcount(y); });
    for (int v : a) cout << v << ' ';
    cout << '\n';
}
