// Armstrong: sum of digits^order == number
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n, sum = 0, d = 0;
    cin >> n;
    for (long long t = n; t; t /= 10) d++;
    for (long long t = n; t; t /= 10) sum += llround(pow(t % 10, d));
    cout << (n > 0 && sum == n ? "Armstrong" : "Not Armstrong") << '\n';
}
