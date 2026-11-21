// Common elements of three sorted arrays, three pointers O(n1+n2+n3)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> a(n1), b(n2), c(n3);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;
    for (int& x : c) cin >> x;
    int i = 0, j = 0, k = 0;
    bool any = false;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << ' '; any = true;
            int v = a[i];
            while (i < n1 && a[i] == v) i++;
            while (j < n2 && b[j] == v) j++;
            while (k < n3 && c[k] == v) k++;
        } else if (a[i] < b[j]) i++;
        else if (b[j] < c[k]) j++;
        else k++;
    }
    cout << (any ? "" : "-1") << '\n';
}
