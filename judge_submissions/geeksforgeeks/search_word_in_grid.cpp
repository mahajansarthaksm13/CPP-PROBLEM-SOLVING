class Solution {
  public:
    vector<vector<int>> searchWord(vector<vector<char>> &mat, string &word) {
        int n = mat.size(); if (n == 0) return {};
        int m = mat[0].size(), L = word.size();
        int dx[8] = {-1,-1,-1,0,0,1,1,1};
        int dy[8] = {-1,0,1,-1,1,-1,0,1};
        vector<vector<int>> res;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] != word[0]) continue;
                for (int d = 0; d < 8; d++) {
                    int x = i, y = j, k = 1;
                    for (; k < L; k++) {
                        x += dx[d]; y += dy[d];
                        if (x < 0 || y < 0 || x >= n || y >= m || mat[x][y] != word[k]) break;
                    }
                    if (k == L) { res.push_back({i, j}); break; }
                }
            }
        }
        return res;
    }
};
