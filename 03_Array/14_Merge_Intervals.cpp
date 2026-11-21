// Merge overlapping intervals, O(n log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (auto& p : v) cin >> p.first >> p.second;
    sort(v.begin(), v.end());
    vector<pair<int,int>> out;
    for (auto& p : v) {
        if (out.empty() || out.back().second < p.first) out.push_back(p);
        else out.back().second = max(out.back().second, p.second);
    }
    for (auto& p : out) cout << p.first << ' ' << p.second << '\n';
}
