class Solution {
  public:
    string longestPalindrome(string &s) {
        int n = s.size();
        if (n == 0) return "";
        int start = 0, len = 1;
        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) { l--; r++; }
            int cur = r - l - 1;
            if (cur > len) { len = cur; start = l + 1; }
        };
        for (int i = 0; i < n; i++) { expand(i, i); expand(i, i + 1); }
        return s.substr(start, len);
    }
};
