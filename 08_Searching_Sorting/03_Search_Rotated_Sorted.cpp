// Search in rotated sorted array (distinct), O(log n)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, target;
    cin >> n;
    vector<int> a(n);
    for (int& v : a) cin >> v;
    cin >> target;
    int lo = 0, hi = n - 1, ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) { ans = mid; break; }
        if (a[lo] <= a[mid]) {                       // left half sorted
            if (a[lo] <= target && target < a[mid]) hi = mid - 1; else lo = mid + 1;
        } else {                                     // right half sorted
            if (a[mid] < target && target <= a[hi]) lo = mid + 1; else hi = mid - 1;
        }
    }
    cout << ans << '\n';
}
