// Clockwise rotate by one: last element moves to front, O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    rotate(a.rbegin(), a.rbegin() + 1, a.rend());
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
