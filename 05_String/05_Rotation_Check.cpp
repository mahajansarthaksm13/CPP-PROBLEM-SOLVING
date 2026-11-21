// s2 is a rotation of s1 iff same length and s2 is a substring of s1+s1, O(n)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bool ok = s1.size() == s2.size() && (s1 + s1).find(s2) != string::npos;
    cout << (ok ? "Yes" : "No") << '\n';
}
