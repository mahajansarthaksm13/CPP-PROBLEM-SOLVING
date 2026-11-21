// Negatives first, positives last; O(n) time, O(1) space (order not preserved)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    int j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0) swap(a[i], a[j++]);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
