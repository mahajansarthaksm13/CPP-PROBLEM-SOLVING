// Median of row-wise sorted matrix: binary search on value, O(R log C log(range))
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> m(r, vector<int>(c));
    int lo = 1e9, hi = -1e9;
    for (auto& row : m) {
        for (int& x : row) cin >> x;
        lo = min(lo, row[0]); hi = max(hi, row[c - 1]);
    }
    int need = (r * c + 1) / 2;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2, cnt = 0;
        for (auto& row : m) cnt += upper_bound(row.begin(), row.end(), mid) - row.begin();
        cnt < need ? lo = mid + 1 : hi = mid;
    }
    cout << lo << '\n';
}
