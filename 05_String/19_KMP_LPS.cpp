// Length of longest proper prefix that is also a suffix (KMP failure function), O(n)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> lps(n, 0);
    for (int i = 1, len = 0; i < n;) {
        if (s[i] == s[len]) lps[i++] = ++len;
        else if (len) len = lps[len - 1];
        else lps[i++] = 0;
    }
    cout << lps[n - 1] << '\n';
}
