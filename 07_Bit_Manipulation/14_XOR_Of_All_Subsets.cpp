// Sum of XOR over all subsets = (OR of all elements) * 2^(n-1), O(n)
#include <iostream>
using namespace std;
int main() {
    int n; long long x, orAll = 0;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> x; orAll |= x; }
    cout << (n ? orAll << (n - 1) : 0) << '\n';
}
