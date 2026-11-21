class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        long long best = arr[0], curMax = arr[0], curMin = arr[0];
        for (size_t i = 1; i < arr.size(); i++) {
            long long x = arr[i];
            if (x < 0) swap(curMax, curMin);
            curMax = max(x, curMax * x);
            curMin = min(x, curMin * x);
            best = max(best, curMax);
        }
        return (int)best;
    }
};
