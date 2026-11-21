// Iterate unordered_set (order unspecified)
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main() {
    unordered_set<string> s = {"Red", "Green", "Blue"};
    for (auto it = s.begin(); it != s.end(); ++it) cout << *it << ' ';
    cout << '\n';
}
