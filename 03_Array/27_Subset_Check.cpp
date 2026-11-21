// Is a2 a subset of a1 (with multiplicity)? hash map O(n+m)
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, m, x;
    cin >> n >> m;
    unordered_map<int,int> cnt;
    for (int i = 0; i < n; i++) { cin >> x; cnt[x]++; }
    bool ok = true;
    for (int i = 0; i < m; i++) { cin >> x; if (cnt[x]-- <= 0) ok = false; }
    cout << (ok ? "Yes" : "No") << '\n';
}
