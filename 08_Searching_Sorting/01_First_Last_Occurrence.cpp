// First and last index of x in sorted array, binary search O(log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int& v : a) cin >> v;
    cin >> x;
    auto lo = lower_bound(a.begin(), a.end(), x), hi = upper_bound(a.begin(), a.end(), x);
    if (lo == hi) cout << "-1 -1\n";
    else cout << lo - a.begin() << ' ' << hi - a.begin() - 1 << '\n';
}
