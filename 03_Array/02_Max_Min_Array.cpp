// Max and min with ~1.5n comparisons (pairwise method)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    int mx, mn, i;
    if (n % 2) { mx = mn = a[0]; i = 1; }
    else { if (a[0] > a[1]) { mx = a[0]; mn = a[1]; } else { mx = a[1]; mn = a[0]; } i = 2; }
    for (; i + 1 < n; i += 2) {
        int big = a[i], small = a[i + 1];
        if (big < small) swap(big, small);
        if (big > mx) mx = big;
        if (small < mn) mn = small;
    }
    cout << "Max: " << mx << "\nMin: " << mn << '\n';
}
