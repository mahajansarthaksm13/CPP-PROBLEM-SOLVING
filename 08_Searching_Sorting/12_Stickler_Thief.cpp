// Max sum with no two adjacent (house robber), DP O(n) O(1)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; long long x, incl = 0, excl = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        long long newIncl = excl + x;
        excl = max(excl, incl);
        incl = newIncl;
    }
    cout << max(incl, excl) << '\n';
}
