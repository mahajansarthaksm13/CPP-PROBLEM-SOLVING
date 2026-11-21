class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        long long best = LLONG_MIN, cur = 0;
        for (int x : arr) {
            cur += x;
            best = max(best, cur);
            if (cur < 0) cur = 0;
        }
        return (int)best;
    }
};
