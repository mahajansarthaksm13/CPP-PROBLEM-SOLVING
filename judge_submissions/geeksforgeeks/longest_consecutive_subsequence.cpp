class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> s(arr.begin(), arr.end());
        int best = 0;
        for (int x : s) {
            if (s.count(x - 1)) continue;
            int len = 1, y = x;
            while (s.count(y + 1)) { y++; len++; }
            best = max(best, len);
        }
        return best;
    }
};
