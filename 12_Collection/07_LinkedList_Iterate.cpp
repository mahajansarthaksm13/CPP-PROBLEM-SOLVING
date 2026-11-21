// Iterate std::list forward
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
    list<string> l = {"Red", "Green", "Blue"};
    for (auto it = l.begin(); it != l.end(); ++it) cout << *it << ' ';
    cout << '\n';
}
