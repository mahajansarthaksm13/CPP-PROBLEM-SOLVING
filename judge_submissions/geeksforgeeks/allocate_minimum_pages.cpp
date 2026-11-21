class Solution {
  public:
    bool feasible(vector<int> &arr, int k, long long cap) {
        long long students = 1, cur = 0;
        for (int p : arr) {
            if (p > cap) return false;
            if (cur + p > cap) { students++; cur = p; }
            else cur += p;
        }
        return students <= k;
    }
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k > n) return -1;
        long long lo = 0, hi = 0;
        for (int p : arr) { lo = max(lo, (long long)p); hi += p; }
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            if (feasible(arr, k, mid)) hi = mid; else lo = mid + 1;
        }
        return (int)lo;
    }
};
