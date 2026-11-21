class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        vector<int> res;
        if (mat.empty()) return res;
        int top = 0, bot = mat.size() - 1, left = 0, right = mat[0].size() - 1;
        while (top <= bot && left <= right) {
            for (int j = left; j <= right; j++) res.push_back(mat[top][j]);
            top++;
            for (int i = top; i <= bot; i++) res.push_back(mat[i][right]);
            right--;
            if (top <= bot) { for (int j = right; j >= left; j--) res.push_back(mat[bot][j]); bot--; }
            if (left <= right) { for (int i = bot; i >= top; i--) res.push_back(mat[i][left]); left++; }
        }
        return res;
    }
};
