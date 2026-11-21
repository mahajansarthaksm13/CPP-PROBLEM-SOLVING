// XOR of 1..n in O(1): pattern repeats every 4
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long r = n % 4;
    cout << (r == 0 ? n : r == 1 ? 1 : r == 2 ? n + 1 : 0) << '\n';
}
