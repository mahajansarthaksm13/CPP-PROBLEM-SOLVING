// Iterate std::list starting at given position (std::next advances iterator)
#include <iostream>
#include <list>
#include <string>
#include <iterator>
using namespace std;
int main() {
    list<string> l = {"Red", "Green", "Blue", "Yellow"};
    size_t pos;
    cout << "Start position: ";
    cin >> pos;
    if (pos >= l.size()) { cout << "Out of range\n"; return 0; }
    for (auto it = next(l.begin(), pos); it != l.end(); ++it) cout << *it << ' ';
    cout << '\n';
}
