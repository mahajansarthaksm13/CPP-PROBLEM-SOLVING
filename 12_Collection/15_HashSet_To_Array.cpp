// unordered_set -> vector (array) via range constructor
#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
int main() {
    unordered_set<string> s = {"Red", "Green", "Blue"};
    vector<string> arr(s.begin(), s.end());
    for (size_t i = 0; i < arr.size(); i++) cout << i << ':' << arr[i] << ' ';
    cout << '\n';
}
