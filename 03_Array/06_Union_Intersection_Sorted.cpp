// Union and intersection counts of two sorted arrays, two pointers O(n+m)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;
    int i = 0, j = 0, uni = 0, inter = 0;
    while (i < n || j < m) {
        int v;
        if (j == m || (i < n && a[i] < b[j])) v = a[i];
        else if (i == n || b[j] < a[i]) v = b[j];
        else { v = a[i]; inter++; }
        uni++;
        while (i < n && a[i] == v) i++;
        while (j < m && b[j] == v) j++;
    }
    cout << "Union: " << uni << "\nIntersection: " << inter << '\n';
}
