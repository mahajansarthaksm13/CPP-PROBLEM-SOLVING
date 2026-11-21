// LCM = a / gcd * b
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    cout << a / __gcd(a, b) * b << '\n';
}
