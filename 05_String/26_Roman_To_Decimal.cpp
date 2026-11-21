// Roman numeral to integer, O(n)
#include <iostream>
#include <string>
using namespace std;
int val(char c) {
    switch (c) {
        case 'I': return 1;   case 'V': return 5;   case 'X': return 10;  case 'L': return 50;
        case 'C': return 100; case 'D': return 500; case 'M': return 1000; default: return 0;
    }
}
int main() {
    string s;
    cin >> s;
    int total = 0;
    for (size_t i = 0; i < s.size(); i++) {
        int v = val(s[i]);
        if (i + 1 < s.size() && v < val(s[i + 1])) total -= v;
        else total += v;
    }
    cout << total << '\n';
}
