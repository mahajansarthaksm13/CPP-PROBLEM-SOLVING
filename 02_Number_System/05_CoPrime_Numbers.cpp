// Co-prime: gcd(a, b) == 1
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    cout << (__gcd(a, b) == 1 ? "Co-Prime" : "Not Co-Prime") << '\n';
}
