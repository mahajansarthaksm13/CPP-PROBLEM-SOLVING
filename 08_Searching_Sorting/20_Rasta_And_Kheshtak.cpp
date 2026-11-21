// Biggest common subsquare of two matrices: binary search on size + 2D rolling hash, O(n*m*log)
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
typedef unsigned long long ull;
const ull P = 1000003ULL, Q = 100000007ULL;  // row/col bases (mod 2^64 by overflow)
struct Hash2D {
    int n, m; vector<vector<ull>> h; vector<ull> pw, qw;
    Hash2D(const vector<vector<ull>>& a) : n(a.size()), m(a[0].size()), h(n + 1, vector<ull>(m + 1, 0)), pw(n + 1, 1), qw(m + 1, 1) {
        for (int i = 1; i <= n; i++) pw[i] = pw[i-1] * P;
        for (int j = 1; j <= m; j++) qw[j] = qw[j-1] * Q;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                h[i][j] = h[i-1][j] * P + h[i][j-1] * Q - h[i-1][j-1] * P * Q + a[i-1][j-1];
    }
    ull get(int i, int j, int k) {  // k x k square with bottom-right (i, j), 1-based
        return h[i][j] - h[i-k][j] * pw[k] - h[i][j-k] * qw[k] + h[i-k][j-k] * pw[k] * qw[k];
    }
};
int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<ull>> A(n, vector<ull>(m));
    for (auto& r : A) for (auto& v : r) { cin >> v; v += 1; }  // avoid zero values
    cin >> x >> y;
    vector<vector<ull>> B(x, vector<ull>(y));
    for (auto& r : B) for (auto& v : r) { cin >> v; v += 1; }
    Hash2D ha(A), hb(B);
    auto ok = [&](int k) {
        unordered_set<ull> s;
        for (int i = k; i <= n; i++) for (int j = k; j <= m; j++) s.insert(ha.get(i, j, k));
        for (int i = k; i <= x; i++) for (int j = k; j <= y; j++) if (s.count(hb.get(i, j, k))) return true;
        return false;
    };
    int lo = 0, hi = min(min(n, m), min(x, y));
    while (lo < hi) {
        int mid = (lo + hi + 1) / 2;
        if (ok(mid)) lo = mid; else hi = mid - 1;
    }
    cout << lo << '\n';
}
