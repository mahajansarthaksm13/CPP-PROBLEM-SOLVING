class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int l = 0, r = (int)arr.size() - 1, lMax = 0, rMax = 0;
        long long total = 0;
        while (l < r) {
            if (arr[l] <= arr[r]) { lMax = max(lMax, arr[l]); total += lMax - arr[l]; l++; }
            else { rMax = max(rMax, arr[r]); total += rMax - arr[r]; r--; }
        }
        return (int)total;
    }
};
