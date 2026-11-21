class Solution {
  public:
    bool isPowerofTwo(int n) {
        long long v = n;
        return v > 0 && (v & (v - 1)) == 0;
    }
};
