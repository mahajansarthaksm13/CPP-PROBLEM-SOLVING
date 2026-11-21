class Solution {
  public:
    int countMinReversals(string s) {
        int n = s.size();
        if (n % 2) return -1;
        int open = 0, close = 0;
        for (char c : s) {
            if (c == '{') open++;
            else { if (open) open--; else close++; }
        }
        return (open + 1) / 2 + (close + 1) / 2;
    }
};
