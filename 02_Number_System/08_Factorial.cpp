// Factorial (fits in unsigned long long for n <= 20)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    cout << f << '\n';
}
