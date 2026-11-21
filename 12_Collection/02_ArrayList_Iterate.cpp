// Iterate vector: range-for, index, iterator
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> v = {"Red", "Green", "Blue"};
    for (auto& s : v) cout << s << ' ';
    cout << '\n';
    for (size_t i = 0; i < v.size(); i++) cout << i << ':' << v[i] << ' ';
    cout << '\n';
    for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' ';
    cout << '\n';
}
