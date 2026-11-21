// Kth smallest and Kth largest via nth_element, O(n) average
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    cin >> k;
    nth_element(a.begin(), a.begin() + k - 1, a.end());
    int kthMin = a[k - 1];
    nth_element(a.begin(), a.begin() + n - k, a.end());
    int kthMax = a[n - k];
    cout << "Kth smallest: " << kthMin << "\nKth largest: " << kthMax << '\n';
}
