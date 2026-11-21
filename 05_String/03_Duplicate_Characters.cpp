// Duplicate characters with counts, O(n) with 256-bucket array
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int cnt[256] = {0};
    for (unsigned char c : s) cnt[c]++;
    for (int c = 0; c < 256; c++)
        if (cnt[c] > 1) cout << (char)c << " : " << cnt[c] << '\n';
}
