class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<vector<int>> res;
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && arr[i] == arr[i-1]) continue;
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && arr[j] == arr[j-1]) continue;
                int lo = j + 1, hi = n - 1;
                while (lo < hi) {
                    long long s = (long long)arr[i] + arr[j] + arr[lo] + arr[hi];
                    if (s == target) {
                        res.push_back({arr[i], arr[j], arr[lo], arr[hi]});
                        while (lo < hi && arr[lo] == arr[lo+1]) lo++;
                        while (lo < hi && arr[hi] == arr[hi-1]) hi--;
                        lo++; hi--;
                    } else if (s < target) lo++;
                    else hi--;
                }
            }
        }
        return res;
    }
};
