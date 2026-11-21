// Power of two: n > 0 and n & (n-1) == 0
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    cout << (n > 0 && (n & (n - 1)) == 0 ? "YES" : "NO") << '\n';
}
