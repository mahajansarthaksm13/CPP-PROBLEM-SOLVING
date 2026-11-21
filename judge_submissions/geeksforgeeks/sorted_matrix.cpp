class Solution {
  public:
    vector<vector<int>> sortedMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> flat;
        flat.reserve(n * n);
        for (auto& row : mat) for (int x : row) flat.push_back(x);
        sort(flat.begin(), flat.end());
        int k = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) mat[i][j] = flat[k++];
        return mat;
    }
};
