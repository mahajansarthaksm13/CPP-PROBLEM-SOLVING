// Print each digit of the number as a word
#include <iostream>
#include <string>
using namespace std;
int main() {
    const char* w[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string s;
    cin >> s;
    for (char c : s)
        if (c >= '0' && c <= '9') cout << w[c - '0'] << ' ';
    cout << '\n';
}
