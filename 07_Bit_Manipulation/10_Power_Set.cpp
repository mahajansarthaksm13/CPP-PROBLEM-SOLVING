// All non-empty subsequences via bitmask, lexicographically sorted
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<string> out;
    for (int mask = 1; mask < (1 << n); mask++) {
        string t;
        for (int i = 0; i < n; i++) if (mask >> i & 1) t += s[i];
        out.push_back(t);
    }
    sort(out.begin(), out.end());
    for (auto& t : out) cout << t << ' ';
    cout << '\n';
}
