class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> cnt(n + 1, 0);
        for (int v : arr) cnt[v]++;
        int rep = -1, miss = -1;
        for (int v = 1; v <= n; v++) {
            if (cnt[v] == 2) rep = v;
            else if (cnt[v] == 0) miss = v;
        }
        return vector<int>{rep, miss};
    }
};
