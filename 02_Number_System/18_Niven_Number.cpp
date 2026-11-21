// Niven (base 10): divisible by digit sum
#include <iostream>
using namespace std;
int main() {
    long long n, s = 0;
    cin >> n;
    for (long long t = n; t; t /= 10) s += t % 10;
    cout << (s && n % s == 0 ? "Niven" : "Not Niven") << '\n';
}
