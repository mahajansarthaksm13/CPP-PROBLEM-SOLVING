// All unique quadruples summing to target: sort + two pointers, O(n^3)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; long long target;
    cin >> n >> target;
    vector<long long> a(n);
    for (auto& v : a) cin >> v;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 3; i++) {
        if (i && a[i] == a[i-1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && a[j] == a[j-1]) continue;
            int l = j + 1, r = n - 1;
            while (l < r) {
                long long s = a[i] + a[j] + a[l] + a[r];
                if (s == target) {
                    cout << a[i] << ' ' << a[j] << ' ' << a[l] << ' ' << a[r] << '\n';
                    do l++; while (l < r && a[l] == a[l-1]);
                    do r--; while (l < r && a[r] == a[r+1]);
                } else if (s < target) l++;
                else r--;
            }
        }
    }
}
