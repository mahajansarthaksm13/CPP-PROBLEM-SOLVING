// Rabin-Karp rolling hash pattern search, expected O(n+m)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string txt, pat;
    cin >> txt >> pat;
    const long long B = 256, MOD = 1000000007LL;
    int n = txt.size(), m = pat.size();
    if (m > n) return 0;
    long long hp = 0, ht = 0, pw = 1;
    for (int i = 0; i < m; i++) {
        hp = (hp * B + pat[i]) % MOD;
        ht = (ht * B + txt[i]) % MOD;
        if (i) pw = pw * B % MOD;
    }
    for (int i = 0; i + m <= n; i++) {
        if (hp == ht && txt.compare(i, m, pat) == 0) cout << "Pattern found at index " << i << '\n';
        if (i + m < n) ht = ((ht - txt[i] * pw % MOD + MOD) * B + txt[i + m]) % MOD;
    }
}
