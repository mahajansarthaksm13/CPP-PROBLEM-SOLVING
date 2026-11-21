class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        if (m == 0 || n == 0) return 0;
        sort(a.begin(), a.end());
        int best = INT_MAX;
        for (int i = 0; i + m - 1 < n; i++) best = min(best, a[i + m - 1] - a[i]);
        return best;
    }
};
