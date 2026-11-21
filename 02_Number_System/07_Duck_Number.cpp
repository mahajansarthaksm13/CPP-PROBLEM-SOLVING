// Duck: contains a 0 that is not the leading digit
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool duck = s[0] != '0' && s.find('0', 1) != string::npos;
    cout << (duck ? "Duck" : "Not Duck") << '\n';
}
