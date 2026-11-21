// Count digits, alphabets and spaces in a file
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    ifstream in("data.txt");
    if (!in) { cout << "data.txt not found\n"; return 1; }
    int digits = 0, alpha = 0, spaces = 0;
    char c;
    while (in.get(c)) {
        if (isdigit((unsigned char)c)) digits++;
        else if (isalpha((unsigned char)c)) alpha++;
        else if (c == ' ') spaces++;
    }
    cout << "Digits: " << digits << "\nAlphabets: " << alpha << "\nSpaces: " << spaces << '\n';
}
