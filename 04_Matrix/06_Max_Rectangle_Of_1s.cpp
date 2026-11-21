// Max rectangle of 1s: histogram per row + monotonic stack, O(n*m)
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int largestHistogram(const vector<int>& h) {
    stack<int> st; int best = 0, n = h.size();
    for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || h[st.top()] >= h[i])) {
            int height = h[st.top()]; st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            best = max(best, height * width);
        }
        st.push(i);
    }
    return best;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> h(m, 0);
    int best = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0, x; j < m; j++) { cin >> x; h[j] = x ? h[j] + 1 : 0; }
        best = max(best, largestHistogram(h));
    }
    cout << best << '\n';
}
