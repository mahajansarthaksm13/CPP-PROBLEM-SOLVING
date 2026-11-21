// First N Fibonacci numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    unsigned long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << ' ';
        b += a; a = b - a;
    }
    cout << '\n';
}
