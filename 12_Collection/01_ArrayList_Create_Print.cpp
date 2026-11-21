// ArrayList equivalent: std::vector, add colors, print
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> colors = {"Red", "Green", "Blue"};
    colors.push_back("Yellow");
    for (auto& c : colors) cout << c << ' ';
    cout << '\n';
}
