class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int,int> cnt;
        for (int x : a) cnt[x]++;
        for (int x : b) {
            auto it = cnt.find(x);
            if (it == cnt.end() || it->second == 0) return false;
            it->second--;
        }
        return true;
    }
};
