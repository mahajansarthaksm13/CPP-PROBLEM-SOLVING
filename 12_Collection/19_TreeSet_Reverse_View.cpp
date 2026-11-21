// Reverse-order view of std::set: reverse iterators (no copy)
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> s = {"Red", "Green", "Blue", "Yellow"};
    for (auto it = s.rbegin(); it != s.rend(); ++it) cout << *it << ' ';   // Yellow Red Green Blue
    cout << '\n';
}
