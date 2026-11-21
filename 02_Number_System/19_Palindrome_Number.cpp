// Palindrome number: reverse == original
#include <iostream>
using namespace std;
int main() {
    long long n, r = 0;
    cin >> n;
    for (long long t = n; t > 0; t /= 10) r = r * 10 + t % 10;
    cout << (n >= 0 && r == n ? "Palindrome" : "Not Palindrome") << '\n';
}
