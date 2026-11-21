// Number of elements in unordered_set
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main() {
    unordered_set<string> s = {"Red", "Green", "Blue", "Green"};
    cout << "size = " << s.size() << '\n';   // 3: duplicate dropped
}
