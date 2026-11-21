// Elements common to all rows in one traversal, O(m*n) with hash map row-stamping
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int m, n, x;
    cin >> m >> n;
    unordered_map<int,int> last;  // value -> last row index it was counted in
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (i == 0) last[x] = 0;
            else if (last.count(x) && last[x] == i - 1) last[x] = i;
        }
    for (auto& p : last) if (p.second == m - 1) cout << p.first << ' ';
    cout << '\n';
}
