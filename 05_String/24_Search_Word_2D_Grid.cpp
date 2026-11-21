// All start positions of word in grid, 8 directions, O(R*C*8*len)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    vector<string> g(r);
    for (auto& row : g) cin >> row;
    string w;
    cin >> w;
    int L = w.size();
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            for (int dr = -1; dr <= 1; dr++)
                for (int dc = -1; dc <= 1; dc++) {
                    if (!dr && !dc) continue;
                    int k = 0, x = i, y = j;
                    while (k < L && x >= 0 && x < r && y >= 0 && y < c && g[x][y] == w[k]) { k++; x += dr; y += dc; }
                    if (k == L) { cout << i << ' ' << j << '\n'; dr = dc = 2; }  // report each start once
                }
}
