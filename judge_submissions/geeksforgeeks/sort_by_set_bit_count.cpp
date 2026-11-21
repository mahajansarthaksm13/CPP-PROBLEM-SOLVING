class Solution {
  public:
    vector<int> sortBySetBitCount(vector<int>& arr) {
        stable_sort(arr.begin(), arr.end(), [](int a, int b) {
            return __builtin_popcount((unsigned)a) > __builtin_popcount((unsigned)b);
        });
        return arr;
    }
};
