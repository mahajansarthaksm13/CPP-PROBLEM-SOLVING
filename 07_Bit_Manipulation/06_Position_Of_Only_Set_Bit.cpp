// 1-based position of the only set bit, -1 if not exactly one set bit
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    if (n == 0 || (n & (n - 1))) cout << -1 << '\n';
    else cout << __builtin_ctzll(n) + 1 << '\n';
}
