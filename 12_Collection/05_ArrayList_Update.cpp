// Update element at index
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> v = {"Red", "Green", "Blue"};
    v[1] = "Purple";
    for (auto& s : v) cout << s << ' ';
    cout << '\n';
}
