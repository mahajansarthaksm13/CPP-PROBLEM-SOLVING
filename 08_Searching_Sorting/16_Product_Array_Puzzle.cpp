// Product of all except self without division: prefix * suffix, O(n)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n), p(n, 1);
    for (auto& v : a) cin >> v;
    for (int i = 1; i < n; i++) p[i] = p[i-1] * a[i-1];
    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) { p[i] *= suffix; suffix *= a[i]; }
    for (auto v : p) cout << v << ' ';
    cout << '\n';
}
