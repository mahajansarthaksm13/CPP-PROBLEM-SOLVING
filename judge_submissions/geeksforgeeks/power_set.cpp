class Solution {
  public:
    vector<string> powerSet(string &s) {
        int n = s.size();
        vector<string> res;
        for (int mask = 0; mask < (1 << n); mask++) {
            string t;
            for (int i = 0; i < n; i++) if (mask & (1 << i)) t += s[i];
            res.push_back(t);
        }
        sort(res.begin(), res.end());
        return res;
    }
};
