class Solution {
  public:
    int findPosition(int n) {
        if (n <= 0) return -1;
        unsigned int u = (unsigned)n;
        if (u & (u - 1)) return -1;
        return __builtin_ctz(u) + 1;
    }
};
