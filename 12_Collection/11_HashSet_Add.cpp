// HashSet equivalent: std::unordered_set (unordered, so "end" has no meaning; insert ignores duplicates)
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main() {
    unordered_set<string> s = {"Red", "Green"};
    s.insert("Blue");
    s.insert("Red");   // duplicate ignored
    for (auto& c : s) cout << c << ' ';
    cout << "\nsize=" << s.size() << '\n';
}
