// LinkedList equivalent: std::list, append to end O(1)
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
    list<string> l = {"Red", "Green"};
    l.push_back("Blue");
    for (auto& s : l) cout << s << ' ';
    cout << '\n';
}
