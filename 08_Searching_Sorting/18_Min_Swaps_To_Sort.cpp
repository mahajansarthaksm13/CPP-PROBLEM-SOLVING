// Minimum swaps to sort distinct array: cycle decomposition, O(n log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i].first; a[i].second = i; }
    sort(a.begin(), a.end());
    vector<bool> seen(n, false);
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        if (seen[i] || a[i].second == i) continue;
        int len = 0;
        for (int j = i; !seen[j]; j = a[j].second) { seen[j] = true; len++; }
        swaps += len - 1;
    }
    cout << swaps << '\n';
}
