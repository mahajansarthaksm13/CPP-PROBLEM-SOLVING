// Longest common prefix of N strings, O(total chars)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string prefix, s;
    cin >> prefix;
    for (int i = 1; i < n; i++) {
        cin >> s;
        size_t k = 0;
        while (k < prefix.size() && k < s.size() && prefix[k] == s[k]) k++;
        prefix.resize(k);
    }
    cout << prefix << '\n';
}
