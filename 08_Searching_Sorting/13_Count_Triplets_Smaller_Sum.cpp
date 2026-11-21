// Count triplets with sum < target: sort + two pointers, O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; long long sum;
    cin >> n;
    vector<long long> a(n);
    for (auto& v : a) cin >> v;
    cin >> sum;
    sort(a.begin(), a.end());
    long long cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            if (a[i] + a[l] + a[r] < sum) { cnt += r - l; l++; }
            else r--;
        }
    }
    cout << cnt << '\n';
}
