// Insert at first position: vector::insert(begin) — O(n) shift
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> v = {"Green", "Blue"};
    v.insert(v.begin(), "Red");
    for (auto& s : v) cout << s << ' ';
    cout << '\n';
}
