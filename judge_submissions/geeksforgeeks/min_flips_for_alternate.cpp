class Solution {
  public:
    int minFlips(string &s) {
        int a = 0, b = 0;
        for (size_t i = 0; i < s.size(); i++) {
            char want = (i % 2 == 0) ? '0' : '1';
            if (s[i] != want) a++; else b++;
        }
        return min(a, b);
    }
};
