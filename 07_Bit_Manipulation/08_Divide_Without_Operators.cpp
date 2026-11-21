// Integer division using shifts and subtraction, O(32)
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    if (b == 0) { cout << "Division by zero\n"; return 0; }
    long long sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
    unsigned long long n = llabs(a), d = llabs(b), q = 0;
    for (int i = 63; i >= 0; i--)
        if ((n >> i) >= d) { n -= d << i; q |= 1ULL << i; }
    cout << sign * (long long)q << '\n';
}
