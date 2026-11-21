// Majority element (> N/2) via Boyer-Moore voting + verification, O(n) O(1)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& v : a) cin >> v;
    int cand = 0, cnt = 0;
    for (int v : a) { if (cnt == 0) cand = v; cnt += (v == cand) ? 1 : -1; }
    cnt = 0;
    for (int v : a) cnt += v == cand;
    cout << (cnt > n / 2 ? cand : -1) << '\n';
}
