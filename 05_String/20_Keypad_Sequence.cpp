// Sentence to mobile numeric keypad sequence
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    const char* key[] = {"2","22","222","3","33","333","4","44","444","5","55","555",
                         "6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    string s;
    getline(cin, s);
    for (char c : s) {
        if (c == ' ') cout << '0';
        else if (isalpha(c)) cout << key[toupper(c) - 'A'];
    }
    cout << '\n';
}
