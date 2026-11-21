// Alternating bits iff n ^ (n >> 1) is all ones
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    unsigned long long x = n ^ (n >> 1);
    cout << ((x & (x + 1)) == 0 ? "YES" : "NO") << '\n';
}
