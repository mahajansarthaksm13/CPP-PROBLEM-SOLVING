// Search in fully sorted matrix as flat array, binary search O(log(m*n))
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m, n, target;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (auto& row : a) for (int& x : row) cin >> x;
    cin >> target;
    int lo = 0, hi = m * n - 1;
    bool found = false;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2, v = a[mid / n][mid % n];
        if (v == target) { found = true; break; }
        v < target ? lo = mid + 1 : hi = mid - 1;
    }
    cout << (found ? "true" : "false") << '\n';
}
