// Automorphic: n^2 ends with n
#include <iostream>
using namespace std;
int main() {
    long long n, m = 1;
    cin >> n;
    for (long long t = n; t; t /= 10) m *= 10;
    cout << (n * n % m == n ? "Automorphic" : "Not Automorphic") << '\n';
}
