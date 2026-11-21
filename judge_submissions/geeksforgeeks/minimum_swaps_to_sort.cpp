class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++) v[i] = {arr[i], i};
        sort(v.begin(), v.end());
        vector<bool> vis(n, false);
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i] || v[i].second == i) continue;
            int cycle = 0, j = i;
            while (!vis[j]) { vis[j] = true; j = v[j].second; cycle++; }
            if (cycle > 1) swaps += cycle - 1;
        }
        return swaps;
    }
};
