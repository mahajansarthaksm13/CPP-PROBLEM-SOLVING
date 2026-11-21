// Disarium: sum of digit^position == n
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    long long sum = 0;
    for (size_t i = 0; i < s.size(); i++) sum += llround(pow(s[i] - '0', i + 1));
    cout << (sum == stoll(s) ? "Disarium" : "Not Disarium") << '\n';
}
