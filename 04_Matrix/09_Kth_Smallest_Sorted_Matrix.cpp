// Kth smallest in row+column sorted matrix: binary search on value + staircase count, O(n log(range))
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for (auto& row : m) for (int& x : row) cin >> x;
    cin >> k;
    int lo = m[0][0], hi = m[n-1][n-1];
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2, cnt = 0;
        for (int i = 0, j = n - 1; i < n; i++) {   // count elements <= mid
            while (j >= 0 && m[i][j] > mid) j--;
            cnt += j + 1;
        }
        cnt < k ? lo = mid + 1 : hi = mid;
    }
    cout << lo << '\n';
}
