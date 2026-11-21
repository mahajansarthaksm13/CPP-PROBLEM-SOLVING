// Longest run of consecutive integers, hash set O(n)
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    unordered_set<int> s;
    for (int i = 0; i < n; i++) { cin >> x; s.insert(x); }
    int best = 0;
    for (int v : s) {
        if (s.count(v - 1)) continue;  // only start from run beginnings
        int len = 1;
        while (s.count(v + len)) len++;
        best = max(best, len);
    }
    cout << best << '\n';
}
