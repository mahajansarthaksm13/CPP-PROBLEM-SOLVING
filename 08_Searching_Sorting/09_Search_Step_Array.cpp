// Search in array where adjacent differ by at most k: jump by |a[i]-x|/k, O(n) worst but skips fast
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k, x;
    cin >> n >> k;
    vector<int> a(n);
    for (int& v : a) cin >> v;
    cin >> x;
    int i = 0;
    while (i < n && a[i] != x) i += max(1, abs(a[i] - x) / k);
    cout << (i < n ? i : -1) << '\n';
}
