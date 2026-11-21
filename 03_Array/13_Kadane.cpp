// Kadane's algorithm, O(n)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; long long x;
    cin >> n >> x;
    long long best = x, cur = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        cur = max(x, cur + x);
        best = max(best, cur);
    }
    cout << best << '\n';
}
