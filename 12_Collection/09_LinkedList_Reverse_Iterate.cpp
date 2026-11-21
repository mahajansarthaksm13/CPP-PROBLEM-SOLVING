// Iterate std::list in reverse with reverse iterators
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
    list<string> l = {"Red", "Green", "Blue"};
    for (auto it = l.rbegin(); it != l.rend(); ++it) cout << *it << ' ';
    cout << '\n';
}
