// LeetCode 344 - Reverse String
// Two pointers, in place, O(n) time, O(1) space.
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = (int)s.size() - 1;
        while (i < j) swap(s[i++], s[j--]);
    }
};
