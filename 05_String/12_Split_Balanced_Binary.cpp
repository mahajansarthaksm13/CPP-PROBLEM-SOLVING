// Max balanced (equal 0s and 1s) substrings, greedy O(n)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int bal = 0, cnt = 0;
    for (char c : s) {
        bal += c == '1' ? 1 : -1;
        if (bal == 0) cnt++;
    }
    cout << (bal == 0 ? cnt : -1) << '\n';
}
