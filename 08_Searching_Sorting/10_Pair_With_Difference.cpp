// Pair with difference N exists? sort + two pointers, O(L log L)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int l; long long n;
    cin >> l >> n;
    vector<long long> a(l);
    for (auto& v : a) cin >> v;
    sort(a.begin(), a.end());
    n = llabs(n);
    int i = 0, j = 1;
    bool found = false;
    while (j < l && !found) {
        long long d = a[j] - a[i];
        if (d == n && i != j) found = true;
        else if (d < n) j++;
        else { i++; if (i == j) j++; }
    }
    cout << (found ? 1 : 0) << '\n';
}
