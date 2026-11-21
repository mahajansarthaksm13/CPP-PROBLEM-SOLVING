class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        auto lo = lower_bound(arr.begin(), arr.end(), x);
        if (lo == arr.end() || *lo != x) return vector<int>{-1, -1};
        auto hi = upper_bound(arr.begin(), arr.end(), x);
        int f = (int)(lo - arr.begin());
        int l = (int)(hi - arr.begin()) - 1;
        return vector<int>{f, l};
    }
};
