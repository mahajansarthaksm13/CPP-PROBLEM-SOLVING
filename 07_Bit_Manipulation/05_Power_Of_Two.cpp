// Power of two: exactly one set bit
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    cout << (n > 0 && (n & (n - 1)) == 0 ? "YES" : "NO") << '\n';
}
