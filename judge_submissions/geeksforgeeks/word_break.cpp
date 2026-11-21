class Solution {
  public:
    bool wordBreak(string &s, vector<string> &dictionary) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        int n = s.size();
        vector<char> dp(n + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
            for (int j = 0; j < i; j++)
                if (dp[j] && dict.count(s.substr(j, i - j))) { dp[i] = 1; break; }
        return dp[n];
    }
};
