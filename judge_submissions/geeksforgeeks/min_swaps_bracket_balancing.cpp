class Solution {
  public:
    int minimumNumberOfSwaps(string& s) {
        int n = s.size();
        vector<int> pos;
        for (int i = 0; i < n; i++) if (s[i] == '[') pos.push_back(i);
        string t = s;
        int count = 0, p = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (t[i] == '[') { count++; p++; }
            else {
                count--;
                if (count < 0) {
                    ans += pos[p] - i;
                    swap(t[i], t[pos[p]]);
                    p++;
                    count = 1;
                }
            }
        }
        return ans;
    }
};
