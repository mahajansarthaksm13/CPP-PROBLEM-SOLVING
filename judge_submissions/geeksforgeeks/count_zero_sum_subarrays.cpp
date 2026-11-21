class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        unordered_map<long long, long long> seen;
        seen[0] = 1;
        long long sum = 0, count = 0;
        for (int v : arr) {
            sum += v;
            auto it = seen.find(sum);
            if (it != seen.end()) count += it->second;
            seen[sum]++;
        }
        return (int)count;
    }
};
