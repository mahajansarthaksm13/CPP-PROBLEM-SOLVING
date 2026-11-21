// Binary string to decimal, O(n)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    unsigned long long v = 0;
    for (char c : s) v = (v << 1) | (c - '0');
    cout << v << '\n';
}
