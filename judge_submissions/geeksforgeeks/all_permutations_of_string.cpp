class Solution {
  public:
    vector<string> findPermutation(string &s) {
        string t = s;
        sort(t.begin(), t.end());
        vector<string> res;
        do { res.push_back(t); } while (next_permutation(t.begin(), t.end()));
        return res;
    }
};
