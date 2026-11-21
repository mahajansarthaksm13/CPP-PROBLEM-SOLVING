// LeetCode 14 - Longest Common Prefix
// Shrink the candidate prefix against each string, O(total characters).
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (size_t i = 1; i < strs.size(); i++) {
            size_t k = 0;
            while (k < prefix.size() && k < strs[i].size() && prefix[k] == strs[i][k]) k++;
            prefix.resize(k);
            if (prefix.empty()) break;
        }
        return prefix;
    }
};
