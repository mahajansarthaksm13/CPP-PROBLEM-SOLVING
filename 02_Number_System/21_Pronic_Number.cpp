// Pronic: k*(k+1) == n
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long k = (long long)sqrt((double)n);
    while (k > 0 && k * (k + 1) > n) k--;
    while ((k + 1) * (k + 2) <= n) k++;
    cout << (n >= 0 && k * (k + 1) == n ? "Pronic" : "Not Pronic") << '\n';
}
