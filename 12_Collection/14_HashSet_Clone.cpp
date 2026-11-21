// Clone unordered_set: copy constructor makes an independent copy
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main() {
    unordered_set<string> a = {"Red", "Green", "Blue"};
    unordered_set<string> b = a;   // clone
    b.insert("Yellow");
    cout << "a size=" << a.size() << " b size=" << b.size() << '\n';   // 3, 4
}
