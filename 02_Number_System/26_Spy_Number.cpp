// Spy: digit sum == digit product
#include <iostream>
using namespace std;
int main() {
    long long n, s = 0, p = 1;
    cin >> n;
    for (long long t = n; t; t /= 10) { s += t % 10; p *= t % 10; }
    cout << (n > 0 && s == p ? "Spy" : "Not Spy") << '\n';
}
