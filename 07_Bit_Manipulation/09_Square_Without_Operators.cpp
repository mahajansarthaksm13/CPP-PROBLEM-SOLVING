// Square via shift-and-add on bits of n, O(log n)
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    long long n;
    cin >> n;
    unsigned long long x = llabs(n), res = 0;
    for (int i = 0; (x >> i); i++)
        if (x >> i & 1) res += x << i;   // n*n = sum over set bits i of n << i
    cout << res << '\n';
}
