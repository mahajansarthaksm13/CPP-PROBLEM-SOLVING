// Minimum reversals to balance {} string, O(n) O(1) space
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    if (s.size() % 2) { cout << -1 << '\n'; return 0; }
    int open = 0, close = 0;  // unmatched counts
    for (char c : s) {
        if (c == '{') open++;
        else if (open) open--;
        else close++;
    }
    cout << (open + 1) / 2 + (close + 1) / 2 << '\n';
}
