// GCD of N numbers (fold with Euclid)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; long long g = 0, x;
    cin >> n;
    while (n--) { cin >> x; g = __gcd(g, x < 0 ? -x : x); }
    cout << g << '\n';
}
