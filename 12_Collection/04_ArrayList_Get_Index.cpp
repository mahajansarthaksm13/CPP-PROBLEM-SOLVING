// Retrieve element at index with bounds check (vector::at throws on bad index)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> v = {"Red", "Green", "Blue"};
    size_t i;
    cout << "Index: ";
    cin >> i;
    if (i < v.size()) cout << v.at(i) << '\n';
    else cout << "Index out of range\n";
}
