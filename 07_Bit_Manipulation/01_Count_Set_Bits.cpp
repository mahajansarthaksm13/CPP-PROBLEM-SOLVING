// Count set bits, Brian Kernighan: O(number of set bits). (Or __builtin_popcountll(n).)
#include <iostream>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    int cnt = 0;
    for (; n; n &= n - 1) cnt++;
    cout << cnt << '\n';
}
