// nth term of count-and-say sequence
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s = "1";
    for (int k = 1; k < n; k++) {
        string t;
        for (size_t i = 0; i < s.size();) {
            size_t j = i;
            while (j < s.size() && s[j] == s[i]) j++;
            t += to_string(j - i) + s[i];
            i = j;
        }
        s = t;
    }
    cout << s << '\n';
}
