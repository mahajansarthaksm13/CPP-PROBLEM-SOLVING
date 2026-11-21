class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<long long> seen;
        long long sum = 0;
        seen.insert(0);
        for (int x : arr) {
            sum += x;
            if (seen.count(sum)) return true;
            seen.insert(sum);
        }
        return false;
    }
};
