// LeetCode 38 - Count and Say
// Build each term by run-length encoding the previous one.
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for (int k = 1; k < n; k++) {
            string t;
            for (size_t i = 0; i < s.size();) {
                size_t j = i;
                while (j < s.size() && s[j] == s[i]) j++;
                t += to_string(j - i) + s[i];
                i = j;
            }
            s = move(t);
        }
        return s;
    }
};
