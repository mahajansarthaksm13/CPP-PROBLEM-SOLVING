// Edit distance (insert/delete/replace), DP O(n*m) time, O(min(n,m)) space
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    if (s.size() < t.size()) swap(s, t);
    int n = s.size(), m = t.size();
    vector<int> prev(m + 1), cur(m + 1);
    for (int j = 0; j <= m; j++) prev[j] = j;
    for (int i = 1; i <= n; i++) {
        cur[0] = i;
        for (int j = 1; j <= m; j++)
            cur[j] = s[i-1] == t[j-1] ? prev[j-1] : 1 + min({prev[j-1], prev[j], cur[j-1]});
        swap(prev, cur);
    }
    cout << prev[m] << '\n';
}
