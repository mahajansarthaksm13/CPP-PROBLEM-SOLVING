class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        long long incl = 0, excl = 0;
        for (int v : arr) {
            long long newIncl = excl + v;
            excl = max(excl, incl);
            incl = newIncl;
        }
        return (int)max(incl, excl);
    }
};
