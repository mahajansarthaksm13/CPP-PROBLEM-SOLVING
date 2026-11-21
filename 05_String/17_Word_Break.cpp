// Word break: DP over prefixes with hash set, O(n * maxWordLen)
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_set<string> dict;
    size_t maxLen = 0;
    for (int i = 0; i < n; i++) { string w; cin >> w; dict.insert(w); maxLen = max(maxLen, w.size()); }
    string s;
    cin >> s;
    vector<bool> dp(s.size() + 1, false);
    dp[0] = true;
    for (size_t i = 1; i <= s.size(); i++)
        for (size_t len = 1; len <= maxLen && len <= i && !dp[i]; len++)
            dp[i] = dp[i - len] && dict.count(s.substr(i - len, len));
    cout << (dp[s.size()] ? 1 : 0) << '\n';
}
