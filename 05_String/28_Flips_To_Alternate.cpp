// Min flips to make binary string alternating: try both starting bits, O(n)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int start0 = 0;  // flips needed if pattern is 0101...
    for (size_t i = 0; i < s.size(); i++) start0 += (s[i] - '0') != (int)(i % 2);
    cout << min(start0, (int)s.size() - start0) << '\n';
}
