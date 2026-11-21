// Print all elements of NxN matrix in sorted order, O(n^2 log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n * n);
    for (int& x : v) cin >> x;
    sort(v.begin(), v.end());
    for (int i = 0; i < n * n; i++) cout << v[i] << (i % n == n - 1 ? '\n' : ' ');
}
