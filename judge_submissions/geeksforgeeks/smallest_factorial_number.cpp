class Solution {
  public:
    long long zeros(long long x) {
        long long c = 0;
        for (long long p = 5; p <= x; p *= 5) c += x / p;
        return c;
    }
    int findNum(int n) {
        long long lo = 0, hi = 5LL * n + 5;
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            if (zeros(mid) >= n) hi = mid; else lo = mid + 1;
        }
        return (int)lo;
    }
};
