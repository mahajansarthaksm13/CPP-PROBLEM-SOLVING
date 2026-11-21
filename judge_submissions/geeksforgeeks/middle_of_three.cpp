class Solution {
  public:
    int middle(int a, int b, int c) {
        return max(min(a, b), min(max(a, b), c));
    }
};
