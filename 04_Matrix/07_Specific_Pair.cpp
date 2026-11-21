// Max mat[c][d]-mat[a][b] with c>a, d>b: suffix-max matrix, O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for (auto& row : m) for (int& x : row) cin >> x;
    vector<vector<int>> mx(n, vector<int>(n));  // max of m[i..][j..]
    mx[n-1][n-1] = m[n-1][n-1];
    for (int j = n - 2; j >= 0; j--) mx[n-1][j] = max(m[n-1][j], mx[n-1][j+1]);
    for (int i = n - 2; i >= 0; i--) mx[i][n-1] = max(m[i][n-1], mx[i+1][n-1]);
    int best = -1e9;
    for (int i = n - 2; i >= 0; i--)
        for (int j = n - 2; j >= 0; j--) {
            best = max(best, mx[i+1][j+1] - m[i][j]);
            mx[i][j] = max({m[i][j], mx[i+1][j], mx[i][j+1]});
        }
    cout << best << '\n';
}
