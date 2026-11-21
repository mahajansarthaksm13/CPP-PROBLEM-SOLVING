// Minimum jumps to reach end, greedy O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    int jumps = 0, curEnd = 0, farthest = 0;
    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + a[i]);
        if (i == curEnd) {
            if (farthest <= i) { cout << -1 << '\n'; return 0; }
            jumps++;
            curEnd = farthest;
        }
    }
    cout << jumps << '\n';
}
