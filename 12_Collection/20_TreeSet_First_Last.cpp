// First and last of std::set: *begin(), *rbegin()
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> s = {"Red", "Green", "Blue", "Yellow"};
    if (s.empty()) { cout << "empty\n"; return 0; }
    cout << "first = " << *s.begin() << "\nlast = " << *s.rbegin() << '\n';
}
