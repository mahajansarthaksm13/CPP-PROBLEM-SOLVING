// Insert at position in std::list — O(1) once iterator positioned
#include <iostream>
#include <list>
#include <string>
#include <iterator>
using namespace std;
int main() {
    list<string> l = {"Red", "Blue"};
    l.insert(next(l.begin(), 1), "Green");   // position 1
    for (auto& s : l) cout << s << ' ';
    cout << '\n';
}
