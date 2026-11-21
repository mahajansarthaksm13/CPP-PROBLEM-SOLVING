// Middle of three distinct numbers with minimal comparisons
#include <iostream>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long mid;
    if ((a > b) == (a < c)) mid = a;
    else if ((b > a) == (b < c)) mid = b;
    else mid = c;
    cout << mid << '\n';
}
