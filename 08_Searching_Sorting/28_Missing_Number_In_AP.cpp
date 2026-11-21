// Is B a term of AP with first term A and common difference C? O(1)
#include <iostream>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> c >> b;
    bool in = c == 0 ? a == b : ((b - a) % c == 0 && (b - a) / c >= 0);
    cout << (in ? 1 : 0) << '\n';
}
