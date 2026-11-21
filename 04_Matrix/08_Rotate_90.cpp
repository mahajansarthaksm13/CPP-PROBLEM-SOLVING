// Rotate square matrix 90 degrees clockwise in place: transpose + reverse rows, O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for (auto& row : m) for (int& x : row) cin >> x;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) swap(m[i][j], m[j][i]);
    for (auto& row : m) reverse(row.begin(), row.end());
    for (auto& row : m) { for (int x : row) cout << x << ' '; cout << '\n'; }
}
