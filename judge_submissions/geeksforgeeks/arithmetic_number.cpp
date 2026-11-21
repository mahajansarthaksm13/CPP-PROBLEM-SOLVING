class Solution {
  public:
    bool inSequence(int a, int b, int c) {
        if (c == 0) return a == b;
        long long diff = (long long)b - a;
        if (diff % c != 0) return false;
        return diff / c >= 0;
    }
};
