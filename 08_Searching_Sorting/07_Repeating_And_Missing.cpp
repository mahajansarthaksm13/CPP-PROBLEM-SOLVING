// Repeating and missing in [1..N]: XOR partition, O(n) O(1) space
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long x = 0;
    for (int& v : a) { cin >> v; x ^= v; }
    for (int i = 1; i <= n; i++) x ^= i;             // x = repeating ^ missing
    long long bit = x & -x, p = 0, q = 0;
    for (int v : a) (v & bit ? p : q) ^= v;
    for (int i = 1; i <= n; i++) (i & bit ? p : q) ^= i;
    // decide which of p, q is the repeating one
    bool pRepeats = false;
    for (int v : a) if (v == p) { pRepeats = true; break; }
    if (!pRepeats) swap(p, q);
    cout << "Repeating: " << p << "\nMissing: " << q << '\n';
}
