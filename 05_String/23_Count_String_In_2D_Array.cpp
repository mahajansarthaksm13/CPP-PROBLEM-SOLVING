// Count occurrences of word in 2D char grid in 4 straight directions, O(R*C*4*len)
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
    int dr[] = {0, 0, 1, -1}, dc[] = {1, -1, 0, 0}, cnt = 0, L = w.size();
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            for (int d = 0; d < 4; d++) {
                int k = 0, x = i, y = j;
                while (k < L && x >= 0 && x < r && y >= 0 && y < c && g[x][y] == w[k]) { k++; x += dr[d]; y += dc[d]; }
                if (k == L) cnt++;
            }
    cout << cnt << '\n';
}
