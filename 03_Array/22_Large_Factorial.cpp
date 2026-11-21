// Factorial of large N as digit array, O(N * digits)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> d{1};  // least significant digit first
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int& x : d) { int v = x * i + carry; x = v % 10; carry = v / 10; }
        while (carry) { d.push_back(carry % 10); carry /= 10; }
    }
    for (auto it = d.rbegin(); it != d.rend(); ++it) cout << *it;
    cout << '\n';
}
