class Solution {
  public:
    int countSquares(int n) {
        if (n <= 1) return 0;
        int r = (int)sqrt((double)(n - 1));
        while ((long long)(r + 1) * (r + 1) <= n - 1) r++;
        while ((long long)r * r > n - 1) r--;
        return r;
    }
};
