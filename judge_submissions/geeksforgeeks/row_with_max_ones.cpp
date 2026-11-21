class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        if (n == 0) return -1;
        int m = arr[0].size(), j = m - 1, best = -1;
        for (int i = 0; i < n; i++)
            while (j >= 0 && arr[i][j] == 1) { j--; best = i; }
        return best;
    }
};
