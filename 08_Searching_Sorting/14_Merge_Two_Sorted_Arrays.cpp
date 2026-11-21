// Merge two sorted arrays, O(n+m)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);
    for (int& v : a) cin >> v;
    for (int& v : b) cin >> v;
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    for (int v : c) cout << v << ' ';
    cout << '\n';
}
