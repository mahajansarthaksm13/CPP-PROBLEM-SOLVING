// Trapping rain water, two pointers O(n) time O(1) space
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int& x : h) cin >> x;
    int l = 0, r = n - 1, lmax = 0, rmax = 0;
    long long water = 0;
    while (l < r) {
        if (h[l] <= h[r]) { lmax = max(lmax, h[l]); water += lmax - h[l]; l++; }
        else { rmax = max(rmax, h[r]); water += rmax - h[r]; r--; }
    }
    cout << water << '\n';
}
