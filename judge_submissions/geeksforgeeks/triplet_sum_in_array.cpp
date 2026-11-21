class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for (int i = 0; i < n - 2; i++) {
            int lo = i + 1, hi = n - 1;
            while (lo < hi) {
                long long s = (long long)arr[i] + arr[lo] + arr[hi];
                if (s == target) return true;
                if (s < target) lo++; else hi--;
            }
        }
        return false;
    }
};
