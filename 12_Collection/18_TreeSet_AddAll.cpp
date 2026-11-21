// Add all elements of one set to another: insert(range)
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> a = {"Red", "Green"}, b = {"Blue", "Green", "Yellow"};
    a.insert(b.begin(), b.end());
    for (auto& c : a) cout << c << ' ';   // Blue Green Red Yellow
    cout << '\n';
}
