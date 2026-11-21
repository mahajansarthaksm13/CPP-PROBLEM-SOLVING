class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        unordered_set<int> seen;
        set<pair<int,int>> uniq;
        for (int x : arr) {
            if (seen.count(-x)) uniq.insert({min(x, -x), max(x, -x)});
            seen.insert(x);
        }
        vector<vector<int>> res;
        for (auto& p : uniq) res.push_back({p.first, p.second});
        return res;
    }
};
