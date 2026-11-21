class Solution {
  public:
    int secFrequent(vector<string> &arr) {
        unordered_map<string,int> cnt;
        for (auto& s : arr) cnt[s]++;
        set<int> freqs;
        for (auto& p : cnt) freqs.insert(p.second);
        if (freqs.size() < 2) return -1;
        auto it = freqs.rbegin();
        ++it;
        return *it;
    }
};
