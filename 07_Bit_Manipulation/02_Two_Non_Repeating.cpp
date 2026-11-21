// Two unique numbers among pairs: XOR all, split by lowest differing bit, O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;  // total count of numbers (2*N+2)
    vector<int> a(n);
    int all = 0;
    for (int& x : a) { cin >> x; all ^= x; }
    int bit = all & -all, p = 0, q = 0;
    for (int x : a) (x & bit ? p : q) ^= x;
    if (p > q) swap(p, q);
    cout << p << ' ' << q << '\n';
}
