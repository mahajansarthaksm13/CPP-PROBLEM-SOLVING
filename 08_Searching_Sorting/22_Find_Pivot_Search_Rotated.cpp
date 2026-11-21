// Find pivot (index of minimum) in rotated sorted array, then binary search the key, O(log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, key;
    cin >> n;
    vector<int> a(n);
    for (int& v : a) cin >> v;
    cin >> key;
    int lo = 0, hi = n - 1;
    while (lo < hi) {                 // find pivot = index of smallest element
        int mid = lo + (hi - lo) / 2;
        if (a[mid] > a[hi]) lo = mid + 1; else hi = mid;
    }
    int pivot = lo;
    auto search = [&](int l, int r) {
        auto it = lower_bound(a.begin() + l, a.begin() + r + 1, key);
        return (it != a.begin() + r + 1 && *it == key) ? int(it - a.begin()) : -1;
    };
    int idx = (pivot > 0 && key >= a[0]) ? search(0, pivot - 1) : search(pivot, n - 1);
    cout << "Pivot index: " << pivot << "\nKey index: " << idx << '\n';
}
