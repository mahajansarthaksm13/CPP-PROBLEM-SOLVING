// Row with max 1s in row-sorted boolean matrix, staircase O(n+m)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (auto& row : a) for (int& x : row) cin >> x;
    int i = 0, j = m - 1, ans = -1;
    while (i < n && j >= 0) {
        if (a[i][j] == 1) { ans = i; j--; }
        else i++;
    }
    cout << ans << '\n';
}
