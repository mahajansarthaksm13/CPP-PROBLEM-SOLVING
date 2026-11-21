// Bits to flip A -> B = popcount(A ^ B)
#include <iostream>
using namespace std;
int main() {
    unsigned long long a, b;
    cin >> a >> b;
    cout << __builtin_popcountll(a ^ b) << '\n';
}
