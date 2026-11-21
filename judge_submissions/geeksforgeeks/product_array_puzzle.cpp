class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, 1);
        long long pre = 1;
        for (int i = 0; i < n; i++) { res[i] = (int)pre; pre *= arr[i]; }
        long long suf = 1;
        for (int i = n - 1; i >= 0; i--) { res[i] = (int)(res[i] * suf); suf *= arr[i]; }
        return res;
    }
};
