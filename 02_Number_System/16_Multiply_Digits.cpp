// Product of digits
#include <iostream>
using namespace std;
int main() {
    long long n, p = 1;
    cin >> n;
    if (n < 0) n = -n;
    for (long long t = n; t; t /= 10) p *= t % 10;
    cout << (n == 0 ? 0 : p) << '\n';
}
