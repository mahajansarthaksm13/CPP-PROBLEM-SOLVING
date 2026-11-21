// Iterate std::set in sorted order
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> s = {"Red", "Green", "Blue"};
    for (auto it = s.begin(); it != s.end(); ++it) cout << *it << ' ';
    cout << '\n';
}
