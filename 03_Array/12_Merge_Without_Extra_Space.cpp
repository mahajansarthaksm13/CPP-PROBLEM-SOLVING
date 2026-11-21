// Merge two sorted arrays in place using gap method, O((n+m) log(n+m))
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;
    auto at = [&](int i) -> int& { return i < n ? a[i] : b[i - n]; };
    int total = n + m;
    for (int gap = (total + 1) / 2; gap > 0; gap = gap == 1 ? 0 : (gap + 1) / 2)
        for (int i = 0; i + gap < total; i++)
            if (at(i) > at(i + gap)) swap(at(i), at(i + gap));
    for (int x : a) cout << x << ' ';
    cout << '\n';
    for (int x : b) cout << x << ' ';
    cout << '\n';
}
