class Solution {
  public:
    int largestRect(vector<int>& h) {
        int n = h.size(), best = 0;
        stack<int> st;
        for (int i = 0; i <= n; i++) {
            int cur = (i == n) ? 0 : h[i];
            while (!st.empty() && h[st.top()] >= cur) {
                int height = h[st.top()]; st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                best = max(best, height * width);
            }
            st.push(i);
        }
        return best;
    }
    int maxArea(vector<vector<int>> &mat) {
        if (mat.empty()) return 0;
        int m = mat[0].size(), best = 0;
        vector<int> h(m, 0);
        for (auto& row : mat) {
            for (int j = 0; j < m; j++) h[j] = row[j] ? h[j] + 1 : 0;
            best = max(best, largestRect(h));
        }
        return best;
    }
};
