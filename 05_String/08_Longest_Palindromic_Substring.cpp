// Longest palindromic substring, Manacher's algorithm O(n)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    string t = "^";
    for (char c : s) { t += '#'; t += c; }
    t += "#$";
    int n = t.size(), center = 0, right = 0, bestLen = 0, bestCenter = 0;
    vector<int> p(n, 0);
    for (int i = 1; i < n - 1; i++) {
        if (i < right) p[i] = min(right - i, p[2 * center - i]);
        while (t[i + p[i] + 1] == t[i - p[i] - 1]) p[i]++;
        if (i + p[i] > right) { center = i; right = i + p[i]; }
        if (p[i] > bestLen) { bestLen = p[i]; bestCenter = i; }
    }
    cout << s.substr((bestCenter - bestLen) / 2, bestLen) << '\n';
}
