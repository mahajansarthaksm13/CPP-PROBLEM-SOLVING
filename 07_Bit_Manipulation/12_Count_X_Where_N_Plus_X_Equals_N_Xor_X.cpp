// n+x == n^x iff x uses only zero bits of n: answer = 2^(zero bits of n)
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    int zeros = 0;
    for (unsigned long long t = n; t; t >>= 1) zeros += !(t & 1);
    cout << (1ULL << zeros) << '\n';
}
