// Boyer-Moore pattern search (bad character heuristic)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string txt, pat;
    cin >> txt >> pat;
    int n = txt.size(), m = pat.size();
    int last[256];
    fill(last, last + 256, -1);
    for (int i = 0; i < m; i++) last[(unsigned char)pat[i]] = i;
    for (int s = 0; s + m <= n;) {
        int j = m - 1;
        while (j >= 0 && pat[j] == txt[s + j]) j--;
        if (j < 0) {
            cout << "Pattern found at index " << s << '\n';
            s += (s + m < n) ? m - last[(unsigned char)txt[s + m]] : 1;
        } else {
            s += max(1, j - last[(unsigned char)txt[s + j]]);
        }
    }
}
