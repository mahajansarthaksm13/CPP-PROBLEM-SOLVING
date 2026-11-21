// LeetCode 56 - Merge Intervals
// Sort by start, then sweep, O(n log n).
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> out;
        for (auto& iv : intervals) {
            if (out.empty() || out.back()[1] < iv[0]) out.push_back(iv);
            else out.back()[1] = max(out.back()[1], iv[1]);
        }
        return out;
    }
};
