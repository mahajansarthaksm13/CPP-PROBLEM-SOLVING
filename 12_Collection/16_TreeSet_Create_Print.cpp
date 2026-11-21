// TreeSet equivalent: std::set (sorted, unique)
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> s = {"Red", "Green", "Blue"};
    s.insert("Yellow");
    for (auto& c : s) cout << c << ' ';   // Blue Green Red Yellow
    cout << '\n';
}
