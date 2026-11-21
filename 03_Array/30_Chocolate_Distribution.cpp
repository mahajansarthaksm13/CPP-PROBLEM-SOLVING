// Chocolate distribution: sort, min over windows of size M, O(n log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    cin >> m;
    sort(a.begin(), a.end());
    int best = 1e9;
    for (int i = 0; i + m - 1 < n; i++) best = min(best, a[i + m - 1] - a[i]);
    cout << best << '\n';
}
