// Statement given: N x M grid (1 = nation, 0 = ocean), Q fire-ball attacks at (r, c).
// Fire burns the hit nation and spreads to 4-adjacent nations. After each attack print nations left.
// Flood fill per attack; each cell burns once => O(N*M + Q) total.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m));
    int alive = 0;
    for (auto& row : g) for (int& x : row) { cin >> x; alive += x; }
    int q;
    cin >> q;
    int dr[] = {1, -1, 0, 0}, dc[] = {0, 0, 1, -1};
    while (q--) {
        int r, c;
        cin >> r >> c;  // 0-based
        if (r >= 0 && r < n && c >= 0 && c < m && g[r][c] == 1) {
            queue<pair<int,int>> bfs;
            bfs.push({r, c}); g[r][c] = 0; alive--;
            while (!bfs.empty()) {
                auto cur = bfs.front(); bfs.pop();
                for (int d = 0; d < 4; d++) {
                    int nr = cur.first + dr[d], nc = cur.second + dc[d];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m && g[nr][nc] == 1) {
                        g[nr][nc] = 0; alive--; bfs.push({nr, nc});
                    }
                }
            }
        }
        cout << alive << '\n';
    }
}
